#pragma once
#include <string>
#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <imgui.h>
#include <imgui_impl_glfw.h>
#include <imgui_impl_opengl3.h>
#include "Color.hpp"

class Window
{
public:
    Window(int width, int height, std::string title);
    virtual ~Window();

    void PollEvents();
    void BeginImGui();
    void RenderImGui();

    void Clear(const Color& color);
    void SwapBuffers();
    bool ShouldClose() const;

    GLFWwindow* GetGLFWWindow() const { return m_window; }

private:
    GLFWwindow* m_window;
};
