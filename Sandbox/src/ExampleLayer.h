#pragma once

#include "Jazz.h"

class ExampleLayer : public Jazz::Layer {
public:
    ExampleLayer();
    virtual ~ExampleLayer() = default;

    virtual void OnAttach() override;
    virtual void OnDetach() override;

    void OnUpdate(Jazz::Timestep ts) override;
    virtual void OnImGuiRender() override;
    void OnEvent(Jazz::Event &e) override;

private:
    Jazz::ShaderLibrary m_ShaderLibrary;
    Jazz::Ref<Jazz::Shader> m_Shader;
    Jazz::Ref<Jazz::VertexArray> m_VertexArray;

    Jazz::Ref<Jazz::Shader> m_FlatColorShader;
    Jazz::Ref<Jazz::VertexArray> m_SquareVA;

    Jazz::Ref<Jazz::Texture2D> m_Texture, m_ChernoLogoTexture;

    Jazz::OrthographicCameraController m_CameraController;
    glm::vec3 m_SquareColor = {0.2f, 0.3f, 0.8f};
};
