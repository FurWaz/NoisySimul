#include <iostream>
#include "Window.hpp"

#define CLEAR_COLOR Color(0.2f, 0.3f, 0.3f, 1.0f)

int main(int argc, char const *argv[])
{
    Window window(800, 600, "NoisySimul");

    while (!window.ShouldClose())
    {
        window.PollEvents();
        window.BeginImGui();

        window.Clear(CLEAR_COLOR);
        window.RenderImGui();
        window.SwapBuffers();
    }

    return 0;
}
