#include "insertion_sort.h"

List do_insertion_sort(List v) {
	List ret;
	for (std::size_t i = 0; i < v.size(); ++i) {
		ret.push_back(v[i]);
		for (std::size_t j = i; j > 0 && ret[j] < ret[j-1]; --j) {
			std::swap(ret[j], ret[j-1]);
		}
	}
	return ret;
}
