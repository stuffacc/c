# Устанавливаем минимальную версию CMake
cmake_minimum_required(VERSION 3.25)
# Указываем название проекта и используемый язык(и)
set(CMAKE_C_STANDARD 99)
set(CMAKE_C_STANDARD_REQUIRED ON)

project(Balance C)
project(CountArray C)
project(Substring C)

# Указываем исполняемый файл
add_executable(Balance balance.c)
add_executable(CountArray count_array.c)
add_executable(Substring substring.c)
