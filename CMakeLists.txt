cmake_minimum_required(VERSION 3.22)
project(snake11)

set(CMAKE_CXX_STANDARD 14)
find_package(SFML 2.5 COMPONENTS graphics audio)

add_executable(snake11 main.cpp field.cpp field.h)

target_link_libraries(snake11 sfml-graphics sfml-audio)