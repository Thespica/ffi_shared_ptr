cmake_minimum_required(VERSION 3.6)
project(ffi_shared_ptr)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -O3 -g -std=c++17 -Wall")

# set auto-generated JNI code and handwriting JNI code as source files
file(GLOB SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/*.cc")

set(LIBNAME "ffi_shared_ptr")

set(JAVA_AWT_LIBRARY NotNeeded)
set(JAVA_AWT_INCLUDE_PATH NotNeeded)
# find JNI related libraries
find_package(JNI REQUIRED)
include_directories(SYSTEM ${JAVA_INCLUDE_PATH})
include_directories(SYSTEM ${JAVA_INCLUDE_PATH2})

# build the bridge JNI library
add_library(${LIBNAME} SHARED ${SOURCES})
target_include_directories(${LIBNAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

add_executable(main ${CMAKE_CURRENT_SOURCE_DIR}/main.cc)
target_link_libraries(main ${LIBNAME})
target_include_directories(main PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/src/main/cpp)

set_target_properties(${LIBNAME} PROPERTIES LINKER_LANGUAGE CXX)