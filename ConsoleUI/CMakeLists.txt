﻿# CMakeList.txt : CMake project for ConsoleUI, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

# Add source to this project's executable.
add_executable (ConsoleUI "ConsoleUI.cpp" "Application.h" "../Engine/Player.h" "../Engine/Map.h" "../Engine/GameObject.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET ConsoleUI PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
