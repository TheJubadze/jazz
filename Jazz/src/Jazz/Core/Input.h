#pragma once

#include "Jazz/Core/Base.h"
#include "Jazz/Core/KeyCodes.h"
#include "Jazz/Core/MouseCodes.h"

namespace Jazz {

class Input {
 public:
  static bool IsKeyPressed(KeyCode key);
  static bool IsMouseButtonPressed(MouseCode button);
  static std::pair<float, float> GetMousePosition();
  static float GetMouseX();
  static float GetMouseY();

};
}// namespace Jazz