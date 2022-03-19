#include <precompiledapplication.h>

#include "window.h"

#include <internal/applogger/applogger.h>

#include <SDL.h>

namespace puma::nina
{
    
    Window::Window( const Extent& _windowExtent, const char* _windowName )
    {
        m_extent = _windowExtent;

        SDL_Window* sdlWindow = SDL_CreateWindow( _windowName, _windowExtent.xPos, _windowExtent.yPos, _windowExtent.width, _windowExtent.height, SDL_WINDOW_SHOWN );

        if ( nullptr == sdlWindow )
        {
            gAppLogger->error( formatString( "SDL Window could not be created. Error: %s", SDL_GetError() ).c_str() );
        }
        else
        {
            m_windowHandle = SDL_GetWindowID( sdlWindow );
            gAppLogger->info( formatString( "SDL Window: %d was created.", m_windowHandle ).c_str() );
            m_renderer = std::make_unique<Renderer>( *this );
        }
    }

    Window::~Window()
    {
        SDL_Window* sdlWindow = SDL_GetWindowFromID( m_windowHandle );
        assert( nullptr != sdlWindow );
        SDL_DestroyWindow( sdlWindow );
        m_windowHandle = kInvalidWindowHandle;
        m_renderer.reset();
    }

    WindowHandle Window::getWindowHandle() const
    {
        return m_windowHandle;
    }
}

