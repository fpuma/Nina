#pragma once

namespace puma::app
{
    using InputNameMapping = std::map<InputId, const char*>;
    constexpr std::initializer_list<InputNameMapping::value_type> kMouseKeyNamesInitList = {
        {static_cast<InputId>(MouseButton::MB_Left)           ,"LBM"          },
        {static_cast<InputId>(MouseButton::MB_Middle)         ,"MMB"          },
        {static_cast<InputId>(MouseButton::MB_Right)          ,"RMB"          },
        {static_cast<InputId>(MouseButton::MB_X1)             ,"MB4"          },
        {static_cast<InputId>(MouseButton::MB_X2)             ,"MB5"          },
    };

    constexpr std::initializer_list<InputNameMapping::value_type> kKeyboardKeyNamesInitList = {
        {static_cast<InputId>(KeyboardKey::KB_RETURN         ),"Enter"        },
        {static_cast<InputId>(KeyboardKey::KB_ESCAPE         ),"ESC"          },
        {static_cast<InputId>(KeyboardKey::KB_BACKSPACE      ),"Backspace"    },
        {static_cast<InputId>(KeyboardKey::KB_TAB            ),"TAB"          },
        {static_cast<InputId>(KeyboardKey::KB_SPACE          ),"SPACE"        },
        {static_cast<InputId>(KeyboardKey::KB_EXCLAIM        ),"!"            },
        {static_cast<InputId>(KeyboardKey::KB_QUOTEDBL       ),"\""           },
        {static_cast<InputId>(KeyboardKey::KB_HASH           ),"#"            },
        {static_cast<InputId>(KeyboardKey::KB_PERCENT        ),"%"            },
        {static_cast<InputId>(KeyboardKey::KB_DOLLAR         ),"$"            },
        {static_cast<InputId>(KeyboardKey::KB_AMPERSAND      ),"&"            },
        {static_cast<InputId>(KeyboardKey::KB_QUOTE          ),"'"            },
        {static_cast<InputId>(KeyboardKey::KB_LEFTPAREN      ),"("            },
        {static_cast<InputId>(KeyboardKey::KB_RIGHTPAREN     ),")"            },
        {static_cast<InputId>(KeyboardKey::KB_ASTERISK       ),"*"            },
        {static_cast<InputId>(KeyboardKey::KB_PLUS           ),"+"            },
        {static_cast<InputId>(KeyboardKey::KB_COMMA          ),","            },
        {static_cast<InputId>(KeyboardKey::KB_MINUS          ),"-"            },
        {static_cast<InputId>(KeyboardKey::KB_PERIOD         ),"."            },
        {static_cast<InputId>(KeyboardKey::KB_SLASH          ),"/"            },
        {static_cast<InputId>(KeyboardKey::KB_0              ),"0"            },
        {static_cast<InputId>(KeyboardKey::KB_1              ),"1"            },
        {static_cast<InputId>(KeyboardKey::KB_2              ),"2"            },
        {static_cast<InputId>(KeyboardKey::KB_3              ),"3"            },
        {static_cast<InputId>(KeyboardKey::KB_4              ),"4"            },
        {static_cast<InputId>(KeyboardKey::KB_5              ),"5"            },
        {static_cast<InputId>(KeyboardKey::KB_6              ),"6"            },
        {static_cast<InputId>(KeyboardKey::KB_7              ),"7"            },
        {static_cast<InputId>(KeyboardKey::KB_8              ),"8"            },
        {static_cast<InputId>(KeyboardKey::KB_9              ),"9"            },
        {static_cast<InputId>(KeyboardKey::KB_COLON          ),":"            },
        {static_cast<InputId>(KeyboardKey::KB_SEMICOLON      ),";"            },
        {static_cast<InputId>(KeyboardKey::KB_LESS           ),"<"            },
        {static_cast<InputId>(KeyboardKey::KB_EQUALS         ),"="            },
        {static_cast<InputId>(KeyboardKey::KB_GREATER        ),">"            },
        {static_cast<InputId>(KeyboardKey::KB_QUESTION       ),"?"            },
        {static_cast<InputId>(KeyboardKey::KB_AT             ),"@"            },
        {static_cast<InputId>(KeyboardKey::KB_LEFTBRACKET    ),"["            },
        {static_cast<InputId>(KeyboardKey::KB_BACKSLASH      ),"\\"           },
        {static_cast<InputId>(KeyboardKey::KB_RIGHTBRACKET   ),"]"            },
        {static_cast<InputId>(KeyboardKey::KB_CARET          ),"^"            },
        {static_cast<InputId>(KeyboardKey::KB_UNDERSCORE     ),"_"            },
        {static_cast<InputId>(KeyboardKey::KB_BACKQUOTE      ),"`"            },
        {static_cast<InputId>(KeyboardKey::KB_A              ),"A"            },
        {static_cast<InputId>(KeyboardKey::KB_B              ),"B"            },
        {static_cast<InputId>(KeyboardKey::KB_C              ),"C"            },
        {static_cast<InputId>(KeyboardKey::KB_D              ),"D"            },
        {static_cast<InputId>(KeyboardKey::KB_E              ),"E"            },
        {static_cast<InputId>(KeyboardKey::KB_F              ),"F"            },
        {static_cast<InputId>(KeyboardKey::KB_G              ),"G"            },
        {static_cast<InputId>(KeyboardKey::KB_H              ),"H"            },
        {static_cast<InputId>(KeyboardKey::KB_I              ),"I"            },
        {static_cast<InputId>(KeyboardKey::KB_J              ),"J"            },
        {static_cast<InputId>(KeyboardKey::KB_K              ),"K"            },
        {static_cast<InputId>(KeyboardKey::KB_L              ),"L"            },
        {static_cast<InputId>(KeyboardKey::KB_M              ),"M"            },
        {static_cast<InputId>(KeyboardKey::KB_N              ),"N"            },
        {static_cast<InputId>(KeyboardKey::KB_O              ),"O"            },
        {static_cast<InputId>(KeyboardKey::KB_P              ),"P"            },
        {static_cast<InputId>(KeyboardKey::KB_Q              ),"Q"            },
        {static_cast<InputId>(KeyboardKey::KB_R              ),"R"            },
        {static_cast<InputId>(KeyboardKey::KB_S              ),"S"            },
        {static_cast<InputId>(KeyboardKey::KB_T              ),"T"            },
        {static_cast<InputId>(KeyboardKey::KB_U              ),"U"            },
        {static_cast<InputId>(KeyboardKey::KB_V              ),"V"            },
        {static_cast<InputId>(KeyboardKey::KB_W              ),"W"            },
        {static_cast<InputId>(KeyboardKey::KB_X              ),"X"            },
        {static_cast<InputId>(KeyboardKey::KB_Y              ),"Y"            },
        {static_cast<InputId>(KeyboardKey::KB_Z              ),"Z"            },
        {static_cast<InputId>(KeyboardKey::KB_CAPSLOCK       ),"CAPSLOCK"     },
        {static_cast<InputId>(KeyboardKey::KB_F1             ),"F1"           },
        {static_cast<InputId>(KeyboardKey::KB_F2             ),"F2"           },
        {static_cast<InputId>(KeyboardKey::KB_F3             ),"F3"           },
        {static_cast<InputId>(KeyboardKey::KB_F4             ),"F4"           },
        {static_cast<InputId>(KeyboardKey::KB_F5             ),"F5"           },
        {static_cast<InputId>(KeyboardKey::KB_F6             ),"F6"           },
        {static_cast<InputId>(KeyboardKey::KB_F7             ),"F7"           },
        {static_cast<InputId>(KeyboardKey::KB_F8             ),"F8"           },
        {static_cast<InputId>(KeyboardKey::KB_F9             ),"F9"           },
        {static_cast<InputId>(KeyboardKey::KB_F10            ),"F10"          },
        {static_cast<InputId>(KeyboardKey::KB_F11            ),"F11"          },
        {static_cast<InputId>(KeyboardKey::KB_F12            ),"F12"          },
        {static_cast<InputId>(KeyboardKey::KB_PRINTSCREEN    ),"PRTSCRN"      },
        {static_cast<InputId>(KeyboardKey::KB_SCROLLLOCK     ),"SCROLLLOCK"   },
        {static_cast<InputId>(KeyboardKey::KB_PAUSE          ),"PAUSE"        },
        {static_cast<InputId>(KeyboardKey::KB_INSERT         ),"INSERT"       },
        {static_cast<InputId>(KeyboardKey::KB_HOME           ),"HOME"         },
        {static_cast<InputId>(KeyboardKey::KB_PAGEUP         ),"PAGEUP"       },
        {static_cast<InputId>(KeyboardKey::KB_DELETE         ),"DELETE"       },
        {static_cast<InputId>(KeyboardKey::KB_END            ),"END"          },
        {static_cast<InputId>(KeyboardKey::KB_PAGEDOWN       ),"PAGEDOWN"     },
        {static_cast<InputId>(KeyboardKey::KB_RIGHT          ),"RIGHT"        },
        {static_cast<InputId>(KeyboardKey::KB_LEFT           ),"LEFT"         },
        {static_cast<InputId>(KeyboardKey::KB_DOWN           ),"DOWN"         },
        {static_cast<InputId>(KeyboardKey::KB_UP             ),"UP"           },
        {static_cast<InputId>(KeyboardKey::KB_NUMLOCKCLEAR   ),"NUMLOCK"      },
        {static_cast<InputId>(KeyboardKey::KB_NUM_DIVIDE     ),"NUM /"        },
        {static_cast<InputId>(KeyboardKey::KB_NUM_MULTIPLY   ),"NUM *"        },
        {static_cast<InputId>(KeyboardKey::KB_NUM_MINUS      ),"NUM -"        },
        {static_cast<InputId>(KeyboardKey::KB_NUM_PLUS       ),"NUM +"        },
        {static_cast<InputId>(KeyboardKey::KB_NUM_ENTER      ),"NUM ENTER"    },
        {static_cast<InputId>(KeyboardKey::KB_NUM_1          ),"NUM 1"        },
        {static_cast<InputId>(KeyboardKey::KB_NUM_2          ),"NUM 2"        },
        {static_cast<InputId>(KeyboardKey::KB_NUM_3          ),"NUM 3"        },
        {static_cast<InputId>(KeyboardKey::KB_NUM_4          ),"NUM 4"        },
        {static_cast<InputId>(KeyboardKey::KB_NUM_5          ),"NUM 5"        },
        {static_cast<InputId>(KeyboardKey::KB_NUM_6          ),"NUM 6"        },
        {static_cast<InputId>(KeyboardKey::KB_NUM_7          ),"NUM 7"        },
        {static_cast<InputId>(KeyboardKey::KB_NUM_8          ),"NUM 8"        },
        {static_cast<InputId>(KeyboardKey::KB_NUM_9          ),"NUM 9"        },
        {static_cast<InputId>(KeyboardKey::KB_NUM_0          ),"NUM 0"        },
        {static_cast<InputId>(KeyboardKey::KB_NUM_PERIOD     ),"NUM ."        },
        {static_cast<InputId>(KeyboardKey::KB_APPLICATION    ),"APPLICATION"  },
        {static_cast<InputId>(KeyboardKey::KB_LCTRL          ),"LCTRL"        },
        {static_cast<InputId>(KeyboardKey::KB_LSHIFT         ),"LSHIFT"       },
        {static_cast<InputId>(KeyboardKey::KB_LALT           ),"LALT"         },
        {static_cast<InputId>(KeyboardKey::KB_LGUI           ),"LGUI"         },
        {static_cast<InputId>(KeyboardKey::KB_RCTRL          ),"RCTRL"        },
        {static_cast<InputId>(KeyboardKey::KB_RSHIFT         ),"RSHIFT"       },
        {static_cast<InputId>(KeyboardKey::KB_RALT           ),"RALT"         },
        {static_cast<InputId>(KeyboardKey::KB_RGUI           ),"RGUI"         },
    };

    constexpr std::initializer_list<InputNameMapping::value_type> kControllerKeyNamesInitList = {
        {static_cast<InputId>(ControllerButton::CB_DPAD_UP)     ,"DPad Up"          },
        {static_cast<InputId>(ControllerButton::CB_DPAD_RIGHT)  ,"DPad Right"          },
        {static_cast<InputId>(ControllerButton::CB_DPAD_DOWN)   ,"DPad Down"          },
        {static_cast<InputId>(ControllerButton::CB_DPAD_LEFT)   ,"DPad Left"          },
        {static_cast<InputId>(ControllerButton::CB_A)           ,"A Button"          },
        {static_cast<InputId>(ControllerButton::CB_B)           ,"B Button"          },
        {static_cast<InputId>(ControllerButton::CB_X)           ,"X Button"          },
        {static_cast<InputId>(ControllerButton::CB_Y)           ,"Y Button"          },
        {static_cast<InputId>(ControllerButton::CB_LB)          ,"Left Bumper"       },
        {static_cast<InputId>(ControllerButton::CB_RB)          ,"Right Bumper"      },
        {static_cast<InputId>(ControllerButton::CB_SELECT)      ,"Select Button"     },
        {static_cast<InputId>(ControllerButton::CB_START)       ,"Start Button"      },
        {static_cast<InputId>(ControllerButton::CB_LSTICK)      ,"Left Stick"        },
        {static_cast<InputId>(ControllerButton::CB_RSTICK)      ,"Right Stick"       },
    };

    InputNameMapping kMouseKeyNames = kMouseKeyNamesInitList;
    InputNameMapping kKeyboardKeyNames = kKeyboardKeyNamesInitList;
    InputNameMapping kControllerKeyNames = kControllerKeyNamesInitList;
}