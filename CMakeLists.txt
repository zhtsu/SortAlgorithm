cmake_minimum_required(VERSION 3.16.0)

project(SortAlgorithm)

set(CMAKE_BUILD_TYPE "Debug")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/build/bin)

include_directories(${PROJECT_SOURCE_DIR}/src)

# add_subdirectory(${PROJECT_SOURCE_DIR}/3rdparty/SFML)
# add_subdirectory(${PROJECT_SOURCE_DIR}/3rdparty/spdlog)

add_subdirectory(${PROJECT_SOURCE_DIR}/src/20240619)

add_executable(
    SortAlgorithm
    ${PROJECT_SOURCE_DIR}/src/Main.cpp
)

target_link_libraries(
    SortAlgorithm
    20240619
)
