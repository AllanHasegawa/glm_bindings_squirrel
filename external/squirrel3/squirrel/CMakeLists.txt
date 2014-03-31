cmake_minimum_required(VERSION 2.8)
project(squirrel)

include_directories("${PROJECT_SOURCE_DIR}")
include_directories("${PROJECT_SOURCE_DIR}/../include")

set(SQUIRREL_SRCS
	sqapi.cpp
	sqbaselib.cpp
	sqfuncstate.cpp
	sqdebug.cpp
	sqlexer.cpp
	sqobject.cpp
	sqcompiler.cpp
	sqstate.cpp
	sqtable.cpp
	sqmem.cpp
	sqvm.cpp
	sqclass.cpp
)

set(CMAKE_CXX_FLAGS "-m64 -D_SQ64 -fno-exceptions -fno-rtti -Wall -fno-strict-aliasing")
set(CMAKE_CXX_FLAGS_RELEASE "-O2 -march=native")

add_library(squirrel ${SQUIRREL_SRCS})
