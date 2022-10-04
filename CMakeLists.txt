cmake_minimum_required(VERSION 3.23)
project (Cpp_Information_Analysis)

set(CMAKE_CXX_STANDARD 14)

add_executable(Cpp_Information_Analysis main.cpp)
add_library(Solver NonLinearSolver.h)