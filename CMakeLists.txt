cmake_minimum_required(VERSION 3.25)
project(NES)

set(CMAKE_CXX_STANDARD 23)

add_executable(NES main.cpp peripheral.h peripheral.cpp bus.cpp bus.h memory.cpp memory.h nes.cpp nes.h cpu6502.cpp cpu6502.h cartridge.cpp cartridge.h mapper.h)
