cmake_minimum_required(VERSION 3.0)
project(SORTS)

add_executable(run
	base.cpp
	bubble_sort.cpp
	cocktail_sort.cpp
	gnome_sort.cpp
	heap_sort.cpp
	insertion_sort.cpp
	merge_sort.cpp
	quick_sort.cpp
	radix_sort.cpp
	selection_sort.cpp
	stooge_sort.cpp
	main.cpp
)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")
