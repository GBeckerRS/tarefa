cmake_minimum_required (VERSION 3.0)

project (tarefa)

include_directories (src/inc)

file (GLOB SOURCES "src/*.cpp")

add_executable (tarefa ${SOURCES})

