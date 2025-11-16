# Устанавливаем минимальную версию CMake
cmake_minimum_required(VERSION 3.25)
# Указываем название проекта и используемый язык(и)
project(AdvancedBalance C)

# Перечисляем библиотеки
add_library(Stack stack.c)

# Указываем исполняемый файл
add_executable(AdvancedBalance advanced_balance.c)
# Связываемся с библиотеками
target_link_libraries(AdvancedBalance PRIVATE Stack)

