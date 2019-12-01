cmake_minimum_required(VERSION 3.15)
project(learnC C)

ADD_SUBDIRECTORY(test)
ADD_SUBDIRECTORY(test2)
set(CMAKE_C_STANDARD 99)

add_executable(learnC main.c test/test1.c test2/test2.c)