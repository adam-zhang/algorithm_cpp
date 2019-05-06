cmake_minimum_required(VERSION 2.8)
project(sorts)
set(sources main.cpp
	BubbleSort.cpp
	InsertSort.cpp
	SelectSort.cpp
	QuickSort.cpp
	Counter.cpp)
add_executable(${PROJECT_NAME} ${sources})
