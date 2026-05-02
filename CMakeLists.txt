cmake_minimum_required(VERSION 3.24)
project(CppActionClient LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(FetchContent)

find_package(raylib QUIET)

if(NOT raylib_FOUND)
    FetchContent_Declare(
        raylib
        GIT_REPOSITORY https://github.com/raysan5/raylib.git
        GIT_TAG 5.5
    )
    FetchContent_MakeAvailable(raylib)
endif()

add_executable(CppActionClient
    Source/main.cpp
    Source/Core/Application.cpp
    Source/Scene/GameScene.cpp
    Source/Game/Player.cpp
    Source/Game/Enemy.cpp
)

target_include_directories(CppActionClient PRIVATE Source)
target_link_libraries(CppActionClient PRIVATE raylib)
