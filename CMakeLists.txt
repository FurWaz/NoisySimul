cmake_minimum_required(VERSION 3.15)
project(NoisySimul)

add_subdirectory(dependencies/glfw)
add_subdirectory(dependencies/glm)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)
include_directories(dependencies/glad/include)
include_directories(dependencies/glfw/include)
include_directories(dependencies/glm)
include_directories(dependencies/imgui)
include_directories(dependencies/imgui/backends)

file(GLOB SOURCES "src/*.cpp")
file(GLOB GLAD "dependencies/glad/src/glad.c")
file(GLOB IMGUI "dependencies/imgui/*.cpp" "dependencies/imgui/backends/imgui_impl_glfw.cpp" "dependencies/imgui/backends/imgui_impl_opengl3.cpp")

add_executable(NoisySimul ${SOURCES} ${GLAD} ${IMGUI})
target_link_libraries(NoisySimul glfw)
