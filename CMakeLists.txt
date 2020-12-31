cmake_minimum_required(VERSION 3.0.0)
project(Chess VERSION 0.1.0)

include(CTest)
enable_testing()

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake/")
find_package(SDL2 REQUIRED)
set(SDL2_LIBRARIES ${SDL2_LIBRARY})
include_directories(${SDL2_INCLUDE_DIRS})

add_executable(Chess WIN32 src/main.cpp src/view/Game.cpp src/view/Game.h src/Pieces/AbsPiece.cpp src/Pieces/AbsPiece.h src/Graph/Graph.cpp src/Graph/Graph.h src/Graph/Node.cpp src/Graph/Node.h src/Graph/Arc.cpp src/Graph/Arc.h)
target_link_libraries(Chess ${SDL2_LIBRARIES})

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")
set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})

include(CPack)
