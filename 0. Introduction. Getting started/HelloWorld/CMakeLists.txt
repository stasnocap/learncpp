cmake_minimum_required(VERSION 3.26)
project(HelloWorld)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_EXTENSIONS  OFF)

if (MSVC)
    add_compile_options(/W4 /WX)
else()
    add_compile_options(-Wall -Wextra -pedantic -Werror)
endif()

add_executable(HelloWorld main.cpp)
