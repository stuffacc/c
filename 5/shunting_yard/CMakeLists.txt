# Устанавливаем минимальную версию CMake
cmake_minimum_required(VERSION 3.25)
# Указываем название проекта и используемый язык(и)
project(ShuntingYard C)

# Перечисляем библиотеки
add_library(Stack stack.c)

# Указываем исполняемый файл
add_executable(ShuntingYard shuntingYard.c)
# Связываемся с библиотеками
target_link_libraries(ShuntingYard PRIVATE Stack)

