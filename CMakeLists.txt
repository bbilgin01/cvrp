cmake_minimum_required(VERSION 3.14)
project(CVRP)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

#include headers
include_directories(include)

#source files
file(GLOB_RECURSE SOURCES CONFIGURE_DEPENDS src/*.cpp)

add_executable(cvrp main.cpp ${SOURCES})