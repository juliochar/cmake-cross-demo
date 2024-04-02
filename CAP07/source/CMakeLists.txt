#[[
        Definindo Static Libraries
        'building' individual targets
        C++ standats
]]

cmake_minimum_required(VERSION 3.5)
set(CXX_STANDARD_REQUIRED ON) #Make C++20 a hard requirement
set(CMAKE_CXX_STANDARD 20) #default C++ standard for targets

project(HelloApp
        VERSION 0.0.1
        DESCRIPTION "Projetos CMake - 007"
        LANGUAGES CXX)

#adicionar static library - nomedotarget -> parametros
add_library(operations STATIC src/operations.cpp)
target_include_directories(operations PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
#target_compile_features(operations PUBLIC cxx_std_20)

add_library(logger STATIC logger/src/log.cpp)
target_include_directories(logger PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/logger/include)


#add_executable para formar o binario - tem q informar onde estão os #include e os .cpp
#GLOBING - usar no lugar de adicionar manualmente 1 a 1
file(GLOB_RECURSE SOURCE_FILES src/*.cpp)
add_executable(HelloAppBinary main.cpp ${SOURCE_FILES})
target_include_directories(HelloAppBinary PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
#target_compile_features(HelloAppBinary PUBLIC cxx_std_20)
target_link_libraries(HelloAppBinary PUBLIC operations logger) # target-name-binario - depende publicamente do Target-lib