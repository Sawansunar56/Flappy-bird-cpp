cmake_minimum_required(VERSION 3.20)

project(flappy-cpp)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
find_package(Curses REQUIRED)

include_directories(lib)
add_subdirectory(lib)
add_subdirectory(src)
