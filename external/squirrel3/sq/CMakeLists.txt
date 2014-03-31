cmake_minimum_required(VERSION 2.8)
project(sq)

include_directories("${PROJECT_SOURCE_DIR}")
include_directories("${PROJECT_SOURCE_DIR}/../include")

set(SQ_SRCS
	sq.c
)

set(CMAKE_CXX_FLAGS "-m64 -s -D_SQ64 -fno-exceptions -fno-rtti")
set(CMAKE_CXX_FLAGS_RELEASE "-O2 -march=native")

add_library(sq ${SQ_SRCS})
target_link_libraries(sq squirrel sqstdlib)
