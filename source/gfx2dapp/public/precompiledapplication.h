#pragma once

#include <algorithm>
#include <array>
#include <assert.h>
#include <map>
#include <memory>
#include <set>
#include <vector>

#include <utils/numerictypes.h>
#include <utils/noncopyable.h>
#include <utils/formatstring.h>

#include <texturemanager/texturedefinitions.h>
#include <input/inputdefinitions.h>
#include <input/inputids.h>


struct SDL_Texture;
struct SDL_Renderer;
struct _TTF_Font;

namespace puma::app
{
    using WindowHandle = puma::u32;
    using TextureHandle = SDL_Texture*;
    using RendererHandle = SDL_Renderer*;
    using FontHandle = _TTF_Font*;

    constexpr WindowHandle kInvalidWindowHandle = 0;

    using ControllerId = u32;
}
