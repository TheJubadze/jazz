#pragma once

#include "Jazz.h"

class Sandbox2D : public Jazz::Layer {
public:
    Sandbox2D();
    virtual ~Sandbox2D() = default;

    virtual void OnAttach() override;
    virtual void OnDetach() override;

    void OnUpdate(Jazz::Timestep ts) override;
    virtual void OnImGuiRender() override;
    void OnEvent(Jazz::Event &e) override;

private:
    Jazz::OrthographicCameraController m_CameraController;

    // Temp
    Jazz::Ref<Jazz::VertexArray> m_SquareVA;
    Jazz::Ref<Jazz::Shader> m_FlatColorShader;
    Jazz::Ref<Jazz::Texture2D> m_CheckerboardTexture;

    struct ProfileResult {
        const char *Name;
        float Time;
    };

    std::vector<ProfileResult> m_ProfileResults;

    glm::vec4 m_SquareColor = {0.2f, 0.3f, 0.8f, 1.0f};
};