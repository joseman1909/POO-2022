cmake_minimum_required(VERSION 3.21)
project(Figuras_Geometricas)

set(CMAKE_CXX_STANDARD 14)

add_executable(Figuras_Geometricas main.cpp View/View.cpp View/View.h Model/Cuadrado.cpp Model/Cuadrado.h Model/Rectangulo.cpp Model/Rectangulo.h Model/Circulo.cpp Model/Circulo.h Model/Figura.cpp Model/Figura.h Model/TrianguloRectangulo.cpp Model/TrianguloRectangulo.h)
