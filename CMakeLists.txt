cmake_minimum_required(VERSION 3.15)
project(Clion)

include_directories(include)

set(CMAKE_CXX_STANDARD 17)


add_executable(main main.cpp)
add_executable(16to10test Teach/16to10test.cpp)
add_executable(grade grade.cpp)
add_executable(reloadop 运算符重载.cpp)
add_executable(calculation "Teach/calculation.cpp")
add_executable(ffzw "ffzw.cpp")
add_executable(duck Teach/duck.cpp)
add_executable(prime prime.cpp)
add_executable(680 leetCode-680.cpp)
add_executable(typeWar leetCode-558.cpp)
add_executable(pointer pointer.cpp)
add_executable(homework homework.cpp)
add_executable(stdmem Teach/stdmem.cpp)
add_executable(use_recursion_to_creat_a_fake_for use_recursion_to_creat_a_fake_for.cpp)
