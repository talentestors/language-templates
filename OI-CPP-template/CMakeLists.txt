cmake_minimum_required(VERSION 3.30)
project(linuxC VERSION 1.1.0 DESCRIPTION "For ACM" LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)

add_compile_options(-Wall -Werror)
set(CMAKE_C_FLAGS -static-libgcc)
set(CMAKE_CXX_FLAGS -static-libstdc++)

# Configure ccache if available
find_program(CCACHE_FOUND ccache)
if (CCACHE_FOUND)
    set_property(GLOBAL PROPERTY RULE_LAUNCH_COMPILE ccache)
    set_property(GLOBAL PROPERTY RULE_LAUNCH_LINK ccache)
endif (CCACHE_FOUND)

# for math.h in the linux
LINK_LIBRARIES(m)

add_executable(OI main.cpp)

# add -DONLINE_JUDGE for Online Judge
if (${CMAKE_BUILD_TYPE} STREQUAL "Debug")
    add_compile_definitions(ONLINE_JUDGE=localhost)
endif (${CMAKE_BUILD_TYPE} STREQUAL "Debug")
