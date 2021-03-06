#pragma once

#include <Jazz/Events/ApplicationEvent.h>
#include <Jazz/Events/MouseEvent.h>
#include <Jazz/Events/KeyEvent.h>
#include <Jazz/Core/Layer.h>

namespace Jazz {

class ImGuiLayer : public Layer {
 public:
  ImGuiLayer();
  ~ImGuiLayer() = default;

  virtual void OnAttach() override;
  virtual void OnDetach() override;
  virtual void OnEvent(Event &e) override;

  void Begin();
  void End();

  void BlockEvents(bool block) { m_BlockEvents = block; }
 private:
  bool m_BlockEvents = true;
  float m_Time = 0.0f;
  ImGuiContext *m_imGuiContext;
};

}