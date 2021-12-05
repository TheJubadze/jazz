#pragma once

namespace Jazz {
    typedef enum class KeyCode : uint16_t {
        // From glfw3.h
        Space = 32,
        Apostrophe = 39, /* ' */
        Comma = 44,      /* , */
        Minus = 45,      /* - */
        Period = 46,     /* . */
        Slash = 47,      /* / */

        D0 = 48, /* 0 */
        D1 = 49, /* 1 */
        D2 = 50, /* 2 */
        D3 = 51, /* 3 */
        D4 = 52, /* 4 */
        D5 = 53, /* 5 */
        D6 = 54, /* 6 */
        D7 = 55, /* 7 */
        D8 = 56, /* 8 */
        D9 = 57, /* 9 */

        Semicolon = 59, /* ; */
        Equal = 61,     /* = */

        A = 65,
        B = 66,
        C = 67,
        D = 68,
        E = 69,
        F = 70,
        G = 71,
        H = 72,
        I = 73,
        J = 74,
        K = 75,
        L = 76,
        M = 77,
        N = 78,
        O = 79,
        P = 80,
        Q = 81,
        R = 82,
        S = 83,
        T = 84,
        U = 85,
        V = 86,
        W = 87,
        X = 88,
        Y = 89,
        Z = 90,

        LeftBracket = 91,  /* [ */
        Backslash = 92,    /* \ */
        RightBracket = 93, /* ] */
        GraveAccent = 96,  /* ` */

        World1 = 161, /* non-US #1 */
        World2 = 162, /* non-US #2 */

        /* Function keys */
        Escape = 256,
        Enter = 257,
        Tab = 258,
        Backspace = 259,
        Insert = 260,
        Delete = 261,
        Right = 262,
        Left = 263,
        Down = 264,
        Up = 265,
        PageUp = 266,
        PageDown = 267,
        Home = 268,
        End = 269,
        CapsLock = 280,
        ScrollLock = 281,
        NumLock = 282,
        PrintScreen = 283,
        Pause = 284,
        F1 = 290,
        F2 = 291,
        F3 = 292,
        F4 = 293,
        F5 = 294,
        F6 = 295,
        F7 = 296,
        F8 = 297,
        F9 = 298,
        F10 = 299,
        F11 = 300,
        F12 = 301,
        F13 = 302,
        F14 = 303,
        F15 = 304,
        F16 = 305,
        F17 = 306,
        F18 = 307,
        F19 = 308,
        F20 = 309,
        F21 = 310,
        F22 = 311,
        F23 = 312,
        F24 = 313,
        F25 = 314,

        /* Keypad */
        KP0 = 320,
        KP1 = 321,
        KP2 = 322,
        KP3 = 323,
        KP4 = 324,
        KP5 = 325,
        KP6 = 326,
        KP7 = 327,
        KP8 = 328,
        KP9 = 329,
        KPDecimal = 330,
        KPDivide = 331,
        KPMultiply = 332,
        KPSubtract = 333,
        KPAdd = 334,
        KPEnter = 335,
        KPEqual = 336,

        LeftShift = 340,
        LeftControl = 341,
        LeftAlt = 342,
        LeftSuper = 343,
        RightShift = 344,
        RightControl = 345,
        RightAlt = 346,
        RightSuper = 347,
        Menu = 348
    } Key;

    inline std::ostream &operator<<(std::ostream &os, KeyCode keyCode) {
        os << static_cast<int32_t>(keyCode);
        return os;
    }
}// namespace Jazz

// From glfw3.h
#define JZ_KEY_SPACE ::Jazz::Key::Space
#define JZ_KEY_APOSTROPHE ::Jazz::Key::Apostrophe /* ' */
#define JZ_KEY_COMMA ::Jazz::Key::Comma           /* , */
#define JZ_KEY_MINUS ::Jazz::Key::Minus           /* - */
#define JZ_KEY_PERIOD ::Jazz::Key::Period         /* . */
#define JZ_KEY_SLASH ::Jazz::Key::Slash           /* / */
#define JZ_KEY_0 ::Jazz::Key::D0
#define JZ_KEY_1 ::Jazz::Key::D1
#define JZ_KEY_2 ::Jazz::Key::D2
#define JZ_KEY_3 ::Jazz::Key::D3
#define JZ_KEY_4 ::Jazz::Key::D4
#define JZ_KEY_5 ::Jazz::Key::D5
#define JZ_KEY_6 ::Jazz::Key::D6
#define JZ_KEY_7 ::Jazz::Key::D7
#define JZ_KEY_8 ::Jazz::Key::D8
#define JZ_KEY_9 ::Jazz::Key::D9
#define JZ_KEY_SEMICOLON ::Jazz::Key::Semicolon /* ; */
#define JZ_KEY_EQUAL ::Jazz::Key::Equal         /* = */
#define JZ_KEY_A ::Jazz::Key::A
#define JZ_KEY_B ::Jazz::Key::B
#define JZ_KEY_C ::Jazz::Key::C
#define JZ_KEY_D ::Jazz::Key::D
#define JZ_KEY_E ::Jazz::Key::E
#define JZ_KEY_F ::Jazz::Key::F
#define JZ_KEY_G ::Jazz::Key::G
#define JZ_KEY_H ::Jazz::Key::H
#define JZ_KEY_I ::Jazz::Key::I
#define JZ_KEY_J ::Jazz::Key::J
#define JZ_KEY_K ::Jazz::Key::K
#define JZ_KEY_L ::Jazz::Key::L
#define JZ_KEY_M ::Jazz::Key::M
#define JZ_KEY_N ::Jazz::Key::N
#define JZ_KEY_O ::Jazz::Key::O
#define JZ_KEY_P ::Jazz::Key::P
#define JZ_KEY_Q ::Jazz::Key::Q
#define JZ_KEY_R ::Jazz::Key::R
#define JZ_KEY_S ::Jazz::Key::S
#define JZ_KEY_T ::Jazz::Key::T
#define JZ_KEY_U ::Jazz::Key::U
#define JZ_KEY_V ::Jazz::Key::V
#define JZ_KEY_W ::Jazz::Key::W
#define JZ_KEY_X ::Jazz::Key::X
#define JZ_KEY_Y ::Jazz::Key::Y
#define JZ_KEY_Z ::Jazz::Key::Z
#define JZ_KEY_LEFT_BRACKET ::Jazz::Key::LeftBracket   /* [ */
#define JZ_KEY_BACKSLASH ::Jazz::Key::Backslash        /* \ */
#define JZ_KEY_RIGHT_BRACKET ::Jazz::Key::RightBracket /* ] */
#define JZ_KEY_GRAVE_ACCENT ::Jazz::Key::GraveAccent   /* ` */
#define JZ_KEY_WORLD_1 ::Jazz::Key::World1             /* non-US #1 */
#define JZ_KEY_WORLD_2 ::Jazz::Key::World2             /* non-US #2 */

/* Function keys */
#define JZ_KEY_ESCAPE ::Jazz::Key::Escape
#define JZ_KEY_ENTER ::Jazz::Key::Enter
#define JZ_KEY_TAB ::Jazz::Key::Tab
#define JZ_KEY_BACKSPACE ::Jazz::Key::Backspace
#define JZ_KEY_INSERT ::Jazz::Key::Insert
#define JZ_KEY_DELETE ::Jazz::Key::Delete
#define JZ_KEY_RIGHT ::Jazz::Key::Right
#define JZ_KEY_LEFT ::Jazz::Key::Left
#define JZ_KEY_DOWN ::Jazz::Key::Down
#define JZ_KEY_UP ::Jazz::Key::Up
#define JZ_KEY_PAGE_UP ::Jazz::Key::PageUp
#define JZ_KEY_PAGE_DOWN ::Jazz::Key::PageDown
#define JZ_KEY_HOME ::Jazz::Key::Home
#define JZ_KEY_END ::Jazz::Key::End
#define JZ_KEY_CAPS_LOCK ::Jazz::Key::CapsLock
#define JZ_KEY_SCROLL_LOCK ::Jazz::Key::ScrollLock
#define JZ_KEY_NUM_LOCK ::Jazz::Key::NumLock
#define JZ_KEY_PRINT_SCREEN ::Jazz::Key::PrintScreen
#define JZ_KEY_PAUSE ::Jazz::Key::Pause
#define JZ_KEY_F1 ::Jazz::Key::F1
#define JZ_KEY_F2 ::Jazz::Key::F2
#define JZ_KEY_F3 ::Jazz::Key::F3
#define JZ_KEY_F4 ::Jazz::Key::F4
#define JZ_KEY_F5 ::Jazz::Key::F5
#define JZ_KEY_F6 ::Jazz::Key::F6
#define JZ_KEY_F7 ::Jazz::Key::F7
#define JZ_KEY_F8 ::Jazz::Key::F8
#define JZ_KEY_F9 ::Jazz::Key::F9
#define JZ_KEY_F10 ::Jazz::Key::F10
#define JZ_KEY_F11 ::Jazz::Key::F11
#define JZ_KEY_F12 ::Jazz::Key::F12
#define JZ_KEY_F13 ::Jazz::Key::F13
#define JZ_KEY_F14 ::Jazz::Key::F14
#define JZ_KEY_F15 ::Jazz::Key::F15
#define JZ_KEY_F16 ::Jazz::Key::F16
#define JZ_KEY_F17 ::Jazz::Key::F17
#define JZ_KEY_F18 ::Jazz::Key::F18
#define JZ_KEY_F19 ::Jazz::Key::F19
#define JZ_KEY_F20 ::Jazz::Key::F20
#define JZ_KEY_F21 ::Jazz::Key::F21
#define JZ_KEY_F22 ::Jazz::Key::F22
#define JZ_KEY_F23 ::Jazz::Key::F23
#define JZ_KEY_F24 ::Jazz::Key::F24
#define JZ_KEY_F25 ::Jazz::Key::F25

/* Keypad */
#define JZ_KEY_KP_0 ::Jazz::Key::KP0
#define JZ_KEY_KP_1 ::Jazz::Key::KP1
#define JZ_KEY_KP_2 ::Jazz::Key::KP2
#define JZ_KEY_KP_3 ::Jazz::Key::KP3
#define JZ_KEY_KP_4 ::Jazz::Key::KP4
#define JZ_KEY_KP_5 ::Jazz::Key::KP5
#define JZ_KEY_KP_6 ::Jazz::Key::KP6
#define JZ_KEY_KP_7 ::Jazz::Key::KP7
#define JZ_KEY_KP_8 ::Jazz::Key::KP8
#define JZ_KEY_KP_9 ::Jazz::Key::KP9
#define JZ_KEY_KP_DECIMAL ::Jazz::Key::KPDecimal
#define JZ_KEY_KP_DIVIDE ::Jazz::Key::KPDivide
#define JZ_KEY_KP_MULTIPLY ::Jazz::Key::KPMultiply
#define JZ_KEY_KP_SUBTRACT ::Jazz::Key::KPSubtract
#define JZ_KEY_KP_ADD ::Jazz::Key::KPAdd
#define JZ_KEY_KP_ENTER ::Jazz::Key::KPEnter
#define JZ_KEY_KP_EQUAL ::Jazz::Key::KPEqual

#define JZ_KEY_LEFT_SHIFT ::Jazz::Key::LeftShift
#define JZ_KEY_LEFT_CONTROL ::Jazz::Key::LeftControl
#define JZ_KEY_LEFT_ALT ::Jazz::Key::LeftAlt
#define JZ_KEY_LEFT_SUPER ::Jazz::Key::LeftSuper
#define JZ_KEY_RIGHT_SHIFT ::Jazz::Key::RightShift
#define JZ_KEY_RIGHT_CONTROL ::Jazz::Key::RightControl
#define JZ_KEY_RIGHT_ALT ::Jazz::Key::RightAlt
#define JZ_KEY_RIGHT_SUPER ::Jazz::Key::RightSuper
#define JZ_KEY_MENU ::Jazz::Key::Menu
