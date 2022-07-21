project(mycc)

cmake_minimum_required(VERSION 3.2)

add_definitions(-std=c++11)

FILE(GLOB SRC_FILES *.cpp)
include_directories(${CMAKE_SOURCE_DIR}/dependencies/startin) # *.h
link_directories(${CMAKE_SOURCE_DIR}/dependencies/startin)    # *.dylib

add_executable(mycc ${SRC_FILES})


target_link_libraries(mycc startin)
