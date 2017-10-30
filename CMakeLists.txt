cmake_minimum_required(VERSION 3.8)
project(my_printf)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        main.c
        my_printf.c
        my_printf.h
        my_put_char.c
        my_put_char.h
        my_put_float.c
        my_put_float.h
        my_put_number.c
        my_put_number.h
        my_put_string.c
        my_put_string.h
        my_put_unsigned.c
        my_put_unsigned.h
        parse.c
        parse.h
        string_length.c
        string_length.h)

add_executable(my_printf ${SOURCE_FILES})