# Устанавливаем минимальную версию CMake
cmake_minimum_required(VERSION 3.25)
# Указываем название проекта и используемый язык(и)
set(CMAKE_C_STANDARD 99)
set(CMAKE_C_STANDARD_REQUIRED ON)

project(Task1 C)
project(Task2 C)
project(Task3 C)
project(Task4 C)

# Указываем исполняемый файл
add_executable(Task1 1.c)
add_executable(Task2 2.c)
add_executable(Task3 3.c)
add_executable(Task4 4.c)
