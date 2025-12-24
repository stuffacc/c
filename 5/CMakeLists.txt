# Устанавливаем минимальную версию CMake
cmake_minimum_required(VERSION 3.25)
# Указываем название проекта и используемый язык(и)
set(CMAKE_C_STANDARD 99)
set(CMAKE_C_STANDARD_REQUIRED ON)

project(AdvancedBalance C)
project(ShuntingYard C)

# Перечисляем библиотеки
add_library(Stack stack.c)

# Указываем исполняемый файл
add_executable(AdvancedBalance advanced_balance.c)
add_executable(ShuntingYard shuntingYard.c)
# Связываемся с библиотеками
target_link_libraries(AdvancedBalance PRIVATE Stack)
target_link_libraries(ShuntingYard PRIVATE Stack)
