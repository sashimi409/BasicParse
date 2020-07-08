cmake_minimum_required (VERSION 3.0)
project (BasicParse)


file(GLOB SOURCES src/*.cpp)

include_directories(includes)


add_library(BasicParse ${SOURCES})