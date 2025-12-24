# Устанавливаем минимальную версию CMake
cmake_minimum_required(VERSION 3.25)
# Указываем название проекта и используемый язык(и)
set(CMAKE_C_STANDARD 99)
set(CMAKE_C_STANDARD_REQUIRED ON)

project(HelloWorld C)

# Создаем исполняемый файл
add_executable(HelloWorld hello_world.c)
