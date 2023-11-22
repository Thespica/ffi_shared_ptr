cmake_minimum_required(VERSION 3.6)
project(ffi_shared_ptr)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -O3 -g -std=c++17 -Wall")

# set auto-generated JNI code and handwriting JNI code as source files
file(GLOB SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/target/generated-sources/annotations/*.cc"
                  "${CMAKE_CURRENT_SOURCE_DIR}/target/generated-test-sources/test-annotations/*.cc"
                  "${CMAKE_CURRENT_SOURCE_DIR}/src/main/cpp/*.cc")

set(LIBNAME "ffi_shared_ptr")

set(JAVA_AWT_LIBRARY NotNeeded)
set(JAVA_AWT_INCLUDE_PATH NotNeeded)
# find JNI related libraries
find_package(JNI REQUIRED)
include_directories(SYSTEM ${JAVA_INCLUDE_PATH})
include_directories(SYSTEM ${JAVA_INCLUDE_PATH2})

# build the bridge JNI library
add_library(${LIBNAME} SHARED ${SOURCES})
target_include_directories(${LIBNAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/src/main/cpp)

set_target_properties(${LIBNAME} PROPERTIES LINKER_LANGUAGE CXX)

# post generated files to target directory
add_custom_command(TARGET ${LIBNAME}
                   POST_BUILD
                   COMMAND ${CMAKE_COMMAND} -E copy $<TARGET_FILE:${LIBNAME}> "${CMAKE_CURRENT_SOURCE_DIR}/target/classes/")

add_custom_command(TARGET ${LIBNAME}
                   POST_BUILD
                   COMMAND ${CMAKE_COMMAND} -E make_directory ${CMAKE_CURRENT_SOURCE_DIR}/target/native/bitcode
                   COMMAND ${CMAKE_COMMAND} -E copy_if_different $<TARGET_OBJECTS:${LIBNAME}> ${CMAKE_CURRENT_SOURCE_DIR}/target/native/bitcode COMMAND_EXPAND_LISTS)