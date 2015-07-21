#include <algorithm>

#include "heap_sort.h"

void do_heap_sort(List &v) {
	auto comp = [](auto x, auto y) {
		return x > y;
	};
	std::make_heap(v.begin(), v.end(), comp);
	List ret;
	while (!v.empty()) {
		auto i = v.front();
		ret.push_back(i);
		std::pop_heap(v.begin(), v.end(), comp);
		v.pop_back();
	}
	v = ret;
}
