cmake_minimum_required(VERSION 3.0.0)
project(menuLib VERSION 0.1.0)

include(CTest)
enable_testing()

add_library(MiniMenuLib menu.cpp)

add_executable(MiniMenuLibExample example.cpp)

target_link_libraries(MiniMenuLibExample MiniMenuLib)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
