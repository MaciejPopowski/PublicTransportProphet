# To use, cd into the bin directory and run the command "cmake .."
cmake_minimum_required(VERSION 3.2)

project(PublicTransportProphet)

set(CMAKE_PREFIX_PATH #[[--- Project Directory Goes Here ---]]PublicTransportProphet/dependencies/libtorch)

find_package(Torch REQUIRED)

set(CMake_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${TORCH_CXX_FLAGS}")

# Add source code files here
add_executable(${PROJECT_NAME} src/DataParser.cpp
                                src/Test.cpp
                )

target_link_libraries(${PROJECT_NAME} "${TORCH_LIBRARIES}")

set_property(TARGET ${PROJECT_NAME} PROPERTY CXX_STANDARD 17)