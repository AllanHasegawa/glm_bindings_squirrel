cmake_minimum_required(VERSION 2.8)
project(sqstdlib)

include_directories("${PROJECT_SOURCE_DIR}")
include_directories("${PROJECT_SOURCE_DIR}/../include")

set(SQSTDLIB_SRCS
	sqstdblob.cpp
	sqstdio.cpp
	sqstdstream.cpp
	sqstdmath.cpp
	sqstdsystem.cpp
	sqstdstring.cpp
	sqstdaux.cpp
	sqstdrex.cpp
)

set(CMAKE_CXX_FLAGS "-m64 -D_SQ64 -fno-exceptions -fno-rtti -Wall -fno-strict-aliasing")
set(CMAKE_CXX_FLAGS_RELEASE "-O2 -march=native")

add_library(sqstdlib ${SQSTDLIB_SRCS})
