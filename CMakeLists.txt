cmake_minimum_required(VERSION 2.8.12)

project(glm_bindings_squirrel)

# ******************************** 
# Dependencies
# ******************************** 
set(SQUIRREL_DIR ${CMAKE_SOURCE_DIR}/external/squirrel3)
add_subdirectory(${SQUIRREL_DIR})
set(SQUIRREL_LIBRARIES squirrel sqstdlib)
set(SQUIRREL_INCLUDE_DIRS ${SQUIRREL_DIR}/include)
include_directories(${SQUIRREL_INCLUDE_DIRS})


set(SQRAT_DIR ${CMAKE_SOURCE_DIR}/external/sqrat0)
set(SQRAT_INCLUDE_DIRS ${SQRAT_DIR}/include)
include_directories(${SQRAT_INCLUDE_DIRS})

include_directories(${CMAKE_SOURCE_DIR}/external/glm)


# ******************************** 
# Compile Flags
# ******************************** 
if(UNIX)
	set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
endif()

# ******************************** 
# Sources
# ******************************** 
set(SRCS
	tests.cpp
)

add_executable(tests ${SRCS})
target_link_libraries(tests ${SQUIRREL_LIBRARIES})

# ******************************** 
# [TODO] make portable :(
# ******************************** 
if (UNIX)
	add_custom_command(TARGET tests POST_BUILD COMMAND
		ln -sf ${CMAKE_SOURCE_DIR}/test_scripts
		${CMAKE_BINARY_DIR}/)
endif()
