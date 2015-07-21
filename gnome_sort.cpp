#include "gnome_sort.h"

void do_gnome_sort(List &v) {
	for (size_t i = 1; i < v.size();) {
		if (v[i-1] < v[i]) {
			++i;
		} else {
			std::swap(v[i-1], v[i]);
			--i;
		}
	}
}
