cmake_minimum_required(VERSION 4.3)
project(Cryptography)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Cryptography
        source/client.cpp
        header/client.h
        source/Application.cpp
        header/Application.h
        source/x25519.cpp
        header/x25519.h
        header/x25519.h)
