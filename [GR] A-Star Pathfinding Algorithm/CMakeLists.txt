cmake_minimum_required(VERSION 3.6)
project(Dijkstra)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Graph.h A-star.h)
add_executable(Dijkstra ${SOURCE_FILES})