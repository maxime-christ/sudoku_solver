cmake_minimum_required(VERSION 3.14)

PROJECT(sudoku_solver)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# fetch latest argparse
include(FetchContent)
FetchContent_Declare(
    argparse
    GIT_REPOSITORY https://github.com/p-ranav/argparse.git
)
FetchContent_MakeAvailable(argparse)

add_library(solver)
add_subdirectory(src/solver)
add_subdirectory(src/model/data_model)

add_executable(sudoku_solver src/main.cpp)
target_link_libraries(sudoku_solver solver)
target_link_libraries(sudoku_solver argparse)
