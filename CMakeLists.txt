cmake_minimum_required(VERSION 3.24)
project(mxmake)

set(CMAKE_CXX_STANDARD 20)

add_executable(mxmake main.cpp src/PLParse.cpp src/mxGeneral.cpp)
