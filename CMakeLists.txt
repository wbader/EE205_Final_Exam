cmake_minimum_required(VERSION 3.16)
project(EE205_Final_Exam)

set(CMAKE_CXX_STANDARD 14)

add_executable(EE205_Final_Exam main.cpp config.h Shape.cpp Shape.h Rectangle.cpp Rectangle.h)
