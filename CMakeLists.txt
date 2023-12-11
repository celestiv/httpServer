cmake_minimum_required(VERSION 3.25)
project(http C)

set(CMAKE_C_STANDARD 17)

add_library(http http-tcp-server.cc)
