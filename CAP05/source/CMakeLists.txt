cmake_minimum_required(VERSION 3.5)
project(HelloApp
        VERSION 0.0.1
        DESCRIPTION "Projetos CMake"
        LANGUAGES CXX)
#GLOBING - usar no lugar de adicionar manualmente 1 a 1
file(GLOB_RECURSE SOURCE_FILES src/*.cpp)
add_executable(HelloAppBinary main.cpp ${SOURCE_FILES})

#target
#add_executable(HelloAppBinary main.cpp src/dog.cpp src/operations.cpp)
target_compile_features(HelloAppBinary PRIVATE cxx_std_20)
target_include_directories(HelloAppBinary PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)