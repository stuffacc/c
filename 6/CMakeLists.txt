# Устанавливаем минимальную версию CMake
cmake_minimum_required(VERSION 3.25)
# Указываем название проекта и используемый язык(и)
set(CMAKE_C_STANDARD 99)
set(CMAKE_C_STANDARD_REQUIRED ON)

project(LoopSortedList C)
project(MainSortedList C)

# Перечисляем библиотеки
add_library(SortedList sorted_list.c)

# Указываем исполняемый файл
add_executable(LoopSortedList loop_sorted_list.c)
add_executable(MainSortedList main_sorted_list.c)
# Связываемся с библиотеками
target_link_libraries(LoopSortedList PRIVATE SortedList)

target_link_libraries(MainSortedList PRIVATE SortedList)
