#pragma once
#include <string>
#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include "Color.hpp"

class Window
{
public:
    Window(int width, int height, std::string title);
    virtual ~Window();

    void Clear(const Color& color);
    void SwapBuffers();
    bool ShouldClose() const;

    GLFWwindow* GetGLFWWindow() const { return m_window; }

private:
    GLFWwindow* m_window;
};
