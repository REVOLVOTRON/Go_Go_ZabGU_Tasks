cmake_minimum_required(VERSION 4.0)
project(Go_Go_ZabGU_Tasks C)

set(CMAKE_C_STANDARD 11)


add_executable(Go_Go_ZabGU_Tasks main.c
        473a/main.c
        473a/even_counter.c
        473a/even_counter.h)

add_executable(473a
        473a/main.c
        473a/even_counter.c
        473a/even_counter.h
        137b/main.c)
add_executable(527
        527/file_compare.c
        527/file_compare.h
        527/main.c)
add_executable(705 705/matrix.c 705/matrix.h
        705/main.c)
add_executable(687 687/main.c
        687/matrix_lv_0.h
        687/matrix_lv_0.c)
target_link_libraries(687 m)

add_executable(137b 137b/main.c
        137b/list_mdl.c
        137b/list_mdl.h
        )

add_executable(538b 538b/main.c
        538b/list.c
        538b/list.h
)
add_executable(434 434/main.c
        434/array_util.c
        434/array_util.h)
