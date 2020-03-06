cmake_minimum_required(VERSION 3.15)
project(pybindlib)

set(CMAKE_CXX_STANDARD 14)

add_subdirectory(cpp/src)

find_package(pybind11 REQUIRED)
pybind11_add_module(pybindlib cpp/src/pybind/pybindlib.cpp)
pybind11_add_module(metalib cpp/src/pybind/metalib.cpp)