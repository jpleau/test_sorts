#include "selection_sort.h"

void do_selection_sort(List &v) {
	List sorted;
	auto cursor = v.begin();
	auto end = v.end();

	for (auto cursor = v.begin(); cursor != end; ++cursor) {
		auto min = cursor;
		for (auto it = cursor; it != end; ++it) {
			if (*it < *min) {
				min = it;
			}
		}
		sorted.push_back(*min);
		std::swap(*min, *cursor);
	}

	v = sorted;
}
