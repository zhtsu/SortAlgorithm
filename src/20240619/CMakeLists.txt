cmake_minimum_required(VERSION 3.16.0)

aux_source_directory(. SRC_LIST)

add_library(20240619 SHARED ${SRC_LIST})

# target_link_libraries(Test SFML spdlog)

set_target_properties(20240619 PROPERTIES OUTPUT_NAME "20240619")
