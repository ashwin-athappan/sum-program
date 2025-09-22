cmake_minimum_required(VERSION 4.0)
project(sum_program C)

set(CMAKE_C_STANDARD 11)

add_executable(sum_program
        main.c
        sum.c)
