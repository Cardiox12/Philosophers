cmake_minimum_required(VERSION 3.17)
project(philosophers C)

set(CMAKE_C_STANDARD 90)

add_executable(philosophers main.c includes/philosophers.h srcs/philosophers.c includes/utils.c includes/utils.h includes/errors.h srcs/parser.c includes/parser.h includes/philosopher.h srcs/philosopher.c)