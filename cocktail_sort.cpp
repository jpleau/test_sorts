#include "cocktail_sort.h"

void do_cocktail_sort(List &v) {
	bool swapped = true;
	while (swapped) {
		swapped = false;
		for (auto i = 1; i < v.size(); ++i) {
			if (v[i-1] > v[i]) {
				std::swap(v[i-1], v[i]);
				swapped = true;
			}
		}
		if (!swapped) {
			break;
		}
		swapped = false;
		for (auto i = v.size()-1; i > 0; --i) {
			if (v[i] < v[i-1]) {
				std::swap(v[i], v[i-1]);
				swapped = true;
			}
		}
	}
}
