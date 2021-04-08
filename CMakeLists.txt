cmake_minimum_required(VERSION 3.17)
project(philosophers C)

set(CMAKE_C_STANDARD 90)
find_package(Threads)
#target_compile_options(philosophers PUBLIC "-pthread")

add_executable(philosophers
        main.c
        includes/philosophers.h
        srcs/philosophers.c
        srcs/utils.c
        includes/utils.h
        includes/errors.h
        srcs/parser.c
        includes/parser.h
        includes/philosopher.h
        srcs/philosopher.c
        srcs/solver.c
        includes/solver.h includes/timer.h srcs/timer.c)
target_link_libraries(philosophers ${CMAKE_THREAD_LIBS_INIT})
