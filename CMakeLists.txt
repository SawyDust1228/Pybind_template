cmake_minimum_required(VERSION 3.20)
set(PROJECT_NAME HelloPybind)
project(${PROJECT_NAME} LANGUAGES CXX)

set(CXX_LIB_DIR ${PROJECT_SOURCE_DIR}/csrc/lib)
set(CMAKE_INSTALL_RPATH ${CXX_LIB_DIR})
message(STATUS "CMAKE_INSTALL_RPATH=${CMAKE_INSTALL_RPATH}")

find_package(pybind11 REQUIRED)

add_subdirectory(csrc)


