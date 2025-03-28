cmake_minimum_required(VERSION 3.15)
project(NoisySimul)

add_subdirectory(dependencies/glfw)
add_subdirectory(dependencies/glm)

set(CMAKE_CXX_STANDARD 17)

file(GLOB SOURCES "src/*.cpp")

include_directories(include)
include_directories(dependencies/glad/include)
include_directories(dependencies/glfw/include)
include_directories(dependencies/glm)

add_executable(NoisySimul ${SOURCES} "dependencies/glad/src/glad.c")
target_link_libraries(NoisySimul glfw)
