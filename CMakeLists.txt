cmake_minimum_required(VERSION 3.20)
project(linked_list)

set(CMAKE_CXX_STANDARD 23)

add_executable(linked_list main.cpp linkedList.cpp linkedList.h doublyLinkedList.cpp doublyLinkedList.h)
