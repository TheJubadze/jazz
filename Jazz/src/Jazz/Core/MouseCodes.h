#pragma once

namespace Jazz {
    typedef enum class MouseCode : uint16_t {
        // From glfw3.h
        Button0 = 0,
        Button1 = 1,
        Button2 = 2,
        Button3 = 3,
        Button4 = 4,
        Button5 = 5,
        Button6 = 6,
        Button7 = 7,

        ButtonLast = Button7,
        ButtonLeft = Button0,
        ButtonRight = Button1,
        ButtonMiddle = Button2
    } Mouse;

    inline std::ostream &operator<<(std::ostream &os, MouseCode mouseCode) {
        os << static_cast<int32_t>(mouseCode);
        return os;
    }
}// namespace Jazz

#define JZ_MOUSE_BUTTON_0 ::Jazz::Mouse::Button0
#define JZ_MOUSE_BUTTON_1 ::Jazz::Mouse::Button1
#define JZ_MOUSE_BUTTON_2 ::Jazz::Mouse::Button2
#define JZ_MOUSE_BUTTON_3 ::Jazz::Mouse::Button3
#define JZ_MOUSE_BUTTON_4 ::Jazz::Mouse::Button4
#define JZ_MOUSE_BUTTON_5 ::Jazz::Mouse::Button5
#define JZ_MOUSE_BUTTON_6 ::Jazz::Mouse::Button6
#define JZ_MOUSE_BUTTON_7 ::Jazz::Mouse::Button7
#define JZ_MOUSE_BUTTON_LAST ::Jazz::Mouse::ButtonLast
#define JZ_MOUSE_BUTTON_LEFT ::Jazz::Mouse::ButtonLeft
#define JZ_MOUSE_BUTTON_RIGHT ::Jazz::Mouse::ButtonRight
#define JZ_MOUSE_BUTTON_MIDDLE ::Jazz::Mouse::ButtonMiddle
