cmake_minimum_required(VERSION 3.0)

project(Tensor)

add_subdirectory(./lib/Tensor)

add_executable(vectorDb ../test/vectorTest.cpp)

add_executable(matrixDb ../test/matrixTest.cpp)

target_link_libraries(vectorDb PRIVATE tensor)

target_link_libraries(matrixDb PRIVATE tensor)