#pragma once

#include <SDL.h>

namespace puma
{

    const std::map<int, InputID> kSdlInputMapping = {
        {SDL_BUTTON_LEFT    ,InputID::MB_Left           },
        {SDL_BUTTON_MIDDLE  ,InputID::MB_Middle         },
        {SDL_BUTTON_RIGHT   ,InputID::MB_Right          },
        {SDL_BUTTON_X1      ,InputID::MB_X1             },
        {SDL_BUTTON_X2      ,InputID::MB_X2             },
        {SDLK_RETURN        ,InputID::KB_RETURN         },
        {SDLK_ESCAPE        ,InputID::KB_ESCAPE         },
        {SDLK_BACKSPACE     ,InputID::KB_BACKSPACE      },
        {SDLK_TAB           ,InputID::KB_TAB            },
        {SDLK_SPACE         ,InputID::KB_SPACE          },
        {SDLK_EXCLAIM       ,InputID::KB_EXCLAIM        },
        {SDLK_QUOTEDBL      ,InputID::KB_QUOTEDBL       },
        {SDLK_HASH          ,InputID::KB_HASH           },
        {SDLK_PERCENT       ,InputID::KB_PERCENT        },
        {SDLK_DOLLAR        ,InputID::KB_DOLLAR         },
        {SDLK_AMPERSAND     ,InputID::KB_AMPERSAND      },
        {SDLK_QUOTE         ,InputID::KB_QUOTE          },
        {SDLK_LEFTPAREN     ,InputID::KB_LEFTPAREN      },
        {SDLK_RIGHTPAREN    ,InputID::KB_RIGHTPAREN     },
        {SDLK_ASTERISK      ,InputID::KB_ASTERISK       },
        {SDLK_PLUS          ,InputID::KB_PLUS           },
        {SDLK_COMMA         ,InputID::KB_COMMA          },
        {SDLK_MINUS         ,InputID::KB_MINUS          },
        {SDLK_PERIOD        ,InputID::KB_PERIOD         },
        {SDLK_SLASH         ,InputID::KB_SLASH          },
        {SDLK_0             ,InputID::KB_0              },
        {SDLK_1             ,InputID::KB_1              },
        {SDLK_2             ,InputID::KB_2              },
        {SDLK_3             ,InputID::KB_3              },
        {SDLK_4             ,InputID::KB_4              },
        {SDLK_5             ,InputID::KB_5              },
        {SDLK_6             ,InputID::KB_6              },
        {SDLK_7             ,InputID::KB_7              },
        {SDLK_8             ,InputID::KB_8              },
        {SDLK_9             ,InputID::KB_9              },
        {SDLK_COLON         ,InputID::KB_COLON          },
        {SDLK_SEMICOLON     ,InputID::KB_SEMICOLON      },
        {SDLK_LESS          ,InputID::KB_LESS           },
        {SDLK_EQUALS        ,InputID::KB_EQUALS         },
        {SDLK_GREATER       ,InputID::KB_GREATER        },
        {SDLK_QUESTION      ,InputID::KB_QUESTION       },
        {SDLK_AT            ,InputID::KB_AT             },
        {SDLK_LEFTBRACKET   ,InputID::KB_LEFTBRACKET    },
        {SDLK_BACKSLASH     ,InputID::KB_BACKSLASH      },
        {SDLK_RIGHTBRACKET  ,InputID::KB_RIGHTBRACKET   },
        {SDLK_CARET         ,InputID::KB_CARET          },
        {SDLK_UNDERSCORE    ,InputID::KB_UNDERSCORE     },
        {SDLK_BACKQUOTE     ,InputID::KB_BACKQUOTE      },
        {SDLK_a             ,InputID::KB_A              },
        {SDLK_b             ,InputID::KB_B              },
        {SDLK_c             ,InputID::KB_C              },
        {SDLK_d             ,InputID::KB_D              },
        {SDLK_e             ,InputID::KB_E              },
        {SDLK_f             ,InputID::KB_F              },
        {SDLK_g             ,InputID::KB_G              },
        {SDLK_h             ,InputID::KB_H              },
        {SDLK_i             ,InputID::KB_I              },
        {SDLK_j             ,InputID::KB_J              },
        {SDLK_k             ,InputID::KB_K              },
        {SDLK_l             ,InputID::KB_L              },
        {SDLK_m             ,InputID::KB_M              },
        {SDLK_n             ,InputID::KB_N              },
        {SDLK_o             ,InputID::KB_O              },
        {SDLK_p             ,InputID::KB_P              },
        {SDLK_q             ,InputID::KB_Q              },
        {SDLK_r             ,InputID::KB_R              },
        {SDLK_s             ,InputID::KB_S              },
        {SDLK_t             ,InputID::KB_T              },
        {SDLK_u             ,InputID::KB_U              },
        {SDLK_v             ,InputID::KB_V              },
        {SDLK_w             ,InputID::KB_W              },
        {SDLK_x             ,InputID::KB_X              },
        {SDLK_y             ,InputID::KB_Y              },
        {SDLK_z             ,InputID::KB_Z              },
        {SDLK_CAPSLOCK      ,InputID::KB_CAPSLOCK       },
        {SDLK_F1            ,InputID::KB_F1             },
        {SDLK_F2            ,InputID::KB_F2             },
        {SDLK_F3            ,InputID::KB_F3             },
        {SDLK_F4            ,InputID::KB_F4             },
        {SDLK_F5            ,InputID::KB_F5             },
        {SDLK_F6            ,InputID::KB_F6             },
        {SDLK_F7            ,InputID::KB_F7             },
        {SDLK_F8            ,InputID::KB_F8             },
        {SDLK_F9            ,InputID::KB_F9             },
        {SDLK_F10           ,InputID::KB_F10            },
        {SDLK_F11           ,InputID::KB_F11            },
        {SDLK_F12           ,InputID::KB_F12            },
        {SDLK_PRINTSCREEN   ,InputID::KB_PRINTSCREEN    },
        {SDLK_SCROLLLOCK    ,InputID::KB_SCROLLLOCK     },
        {SDLK_PAUSE         ,InputID::KB_PAUSE          },
        {SDLK_INSERT        ,InputID::KB_INSERT         },
        {SDLK_HOME          ,InputID::KB_HOME           },
        {SDLK_PAGEUP        ,InputID::KB_PAGEUP         },
        {SDLK_DELETE        ,InputID::KB_DELETE         },
        {SDLK_END           ,InputID::KB_END            },
        {SDLK_PAGEDOWN      ,InputID::KB_PAGEDOWN       },
        {SDLK_RIGHT         ,InputID::KB_RIGHT          },
        {SDLK_LEFT          ,InputID::KB_LEFT           },
        {SDLK_DOWN          ,InputID::KB_DOWN           },
        {SDLK_UP            ,InputID::KB_UP             },
        {SDLK_NUMLOCKCLEAR  ,InputID::KB_NUMLOCKCLEAR   },
        {SDLK_KP_DIVIDE     ,InputID::KB_NUM_DIVIDE     },
        {SDLK_KP_MULTIPLY   ,InputID::KB_NUM_MULTIPLY   },
        {SDLK_KP_MINUS      ,InputID::KB_NUM_MINUS      },
        {SDLK_KP_PLUS       ,InputID::KB_NUM_PLUS       },
        {SDLK_KP_ENTER      ,InputID::KB_NUM_ENTER      },
        {SDLK_KP_1          ,InputID::KB_NUM_1          },
        {SDLK_KP_2          ,InputID::KB_NUM_2          },
        {SDLK_KP_3          ,InputID::KB_NUM_3          },
        {SDLK_KP_4          ,InputID::KB_NUM_4          },
        {SDLK_KP_5          ,InputID::KB_NUM_5          },
        {SDLK_KP_6          ,InputID::KB_NUM_6          },
        {SDLK_KP_7          ,InputID::KB_NUM_7          },
        {SDLK_KP_8          ,InputID::KB_NUM_8          },
        {SDLK_KP_9          ,InputID::KB_NUM_9          },
        {SDLK_KP_0          ,InputID::KB_NUM_0          },
        {SDLK_KP_PERIOD     ,InputID::KB_NUM_PERIOD     },
        {SDLK_APPLICATION   ,InputID::KB_APPLICATION    },
        {SDLK_LCTRL         ,InputID::KB_LCTRL          },
        {SDLK_LSHIFT        ,InputID::KB_LSHIFT         },
        {SDLK_LALT          ,InputID::KB_LALT           },
        {SDLK_LGUI          ,InputID::KB_LGUI           },
        {SDLK_RCTRL         ,InputID::KB_RCTRL          },
        {SDLK_RSHIFT        ,InputID::KB_RSHIFT         },
        {SDLK_RALT          ,InputID::KB_RALT           },
        {SDLK_RGUI          ,InputID::KB_RGUI           },
    };

}