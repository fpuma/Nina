#include <precompiledapplication.h>

#include "application.h"

#include <internal/application/window.h>

#include <SDL.h>
#include <SDL_ttf.h>

namespace puma::app
{
    constexpr s32 kSdlEventBufferSize = 10;

    Application::Application() {}
    Application::~Application() {}

    std::unique_ptr<IApplication> IApplication::create()
    {
        return std::make_unique<Application>();
    }

    void Application::init()
    {
        if ( SDL_InitSubSystem( SDL_INIT_VIDEO ) < 0 )
        {
            std::cout << "Error initializing SDL: " << SDL_GetError() << std::endl;
            return;
        }

        if ( TTF_Init() == -1 )
        {
            std::cout << "Error initializing SDL TTF: " << TTF_GetError() << std::endl;
        }
    }

    WindowHandle Application::createWindow( const Extent& _extent, const char* _windowName )
    {
        auto windowPtr = std::make_unique<Window>( _extent, _windowName );
        assert( windowPtr->isValid() );
        
        WindowHandle windowHandle = windowPtr->getWindowHandle();

        m_windows.insert( std::pair( windowHandle, std::move( windowPtr ) ) );

        if ( kInvalidWindowHandle == m_defaultWindowHandle )
        {
            m_defaultWindowHandle = windowHandle;
        }

        return windowHandle;
    }

    void Application::uninit()
    {
        m_windows.clear();

        TTF_Quit();
        SDL_QuitSubSystem( SDL_INIT_VIDEO );
    }

    void Application::update()
    {
        SDL_Event sdlEvents[kSdlEventBufferSize];
        SDL_PumpEvents();
        SDL_eventaction sdlEventAction = m_peekSdlEvents ? SDL_PEEKEVENT : SDL_GETEVENT;

        s32 eventsRetreived = SDL_PeepEvents( sdlEvents, kSdlEventBufferSize, sdlEventAction, SDL_QUIT, SDL_QUIT );
        eventsRetreived = SDL_PeepEvents( sdlEvents + eventsRetreived, kSdlEventBufferSize - eventsRetreived, sdlEventAction, SDL_DISPLAYEVENT, SDL_WINDOWEVENT );

        if (eventsRetreived < 0)
        {
            std::cout << "Error retreiving SDL events: " << SDL_GetError() << std::endl;
        }

        assert( eventsRetreived >= 0 );
        for (s32 eventIndex = 0; eventIndex < eventsRetreived; ++eventIndex)
        {
            SDL_Event event = sdlEvents[eventIndex];
			switch (event.type)
			{
			case SDL_QUIT:
			{
				m_shouldQuit = true;
				break;
			}

            case SDL_WINDOWEVENT:
            {
                switch ( event.window.event )
                {
                case SDL_WINDOWEVENT_CLOSE:
                {
                    auto foundIt = m_windows.find( event.window.windowID );
                    assert( foundIt != m_windows.end() );

                    m_windows.erase( foundIt->first );

                    break;
                }
                default: break;
                }
                break;
            }

			default:
				break;
			}
        }

        if ( m_windows.empty() )
        {
            m_shouldQuit = true;
        }
    }

    namespace
    {
        IWindow* findWindow( const WindowMap& _windowMap, WindowHandle _windowHandle )
        {
            assert( kInvalidWindowHandle != _windowHandle );
            auto foundIt = _windowMap.find( _windowHandle );

            IWindow* result = nullptr;

            if ( foundIt != _windowMap.end() )
            {
                result = foundIt->second.get();
            }

            return result;
        }

        IRenderer* getWindowRenderer( const WindowMap& _windowMap, WindowHandle _windowHandle )
        {
            assert( kInvalidWindowHandle != _windowHandle );
            IRenderer* result = nullptr;
            IWindow* defaultWindow = findWindow( _windowMap, _windowHandle );

            if ( nullptr != defaultWindow )
            {
                result = defaultWindow->getRenderer();
            }

            return result;
        }
    }

    IWindow* Application::getDefaultWindow()
    {
        return findWindow( m_windows, m_defaultWindowHandle );
    }

    const IWindow* Application::getDefaultWindow() const
    {
        return findWindow( m_windows, m_defaultWindowHandle );
    }

    IRenderer* Application::getDefaultRenderer()
    {
        return getWindowRenderer( m_windows, m_defaultWindowHandle );
    }

    const IRenderer* Application::getDefaultRenderer() const
    {
        return getWindowRenderer( m_windows, m_defaultWindowHandle );
    }

    IWindow* Application::getWindow( WindowHandle _windowHandle )
    {
        return findWindow( m_windows, _windowHandle );
    }

    const IWindow* Application::getWindow( WindowHandle _windowHandle ) const
    {
        return findWindow( m_windows, _windowHandle );
    }
}