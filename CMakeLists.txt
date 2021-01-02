cmake_minimum_required(VERSION 3.0.0)
project(Chess VERSION 0.1.0)

include(CTest)

enable_testing()

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake/")
find_package(SDL2 REQUIRED)
set(SDL2_LIBRARIES ${SDL2_LIBRARY})
include_directories(${SDL2_INCLUDE_DIRS})

include_directories(src)
file(GLOB_RECURSE uMario_SOURCES "uNext/*.cpp")
file(GLOB_RECURSE Chess_SOURCES "src/*.cpp")
add_executable(Chess ${Chess_SOURCES})

#add_executable(Chess WIN32 src/main.cpp src/view/Game.cpp src/view/Game.h src/Pieces/AbsPiece.cpp src/Pieces/AbsPiece.h src/Board/Square.h src/Board/Square.cpp src/Tree/Tree.h src/Tree/Tree.cpp)
target_link_libraries(Chess ${SDL2_LIBRARIES})

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")
set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})

include(CPack)
