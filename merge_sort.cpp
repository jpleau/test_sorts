#include "merge_sort.h"

auto merge(List v1, List v2) {
	List ret;
	auto b1 = v1.begin(); auto e1 = v1.end();
	auto b2 = v2.begin(); auto e2 = v2.end();
	while (b1 != e1 || b2 != e2) {
		if (b1 == e1 || (b2 != e2 && *b1 >= *b2)) {
			ret.push_back(*b2++);
			continue;
		}
		if (b2 == e2 || (b1 != e1 && *b1 < *b2)) {
			ret.push_back(*b1++);
			continue;
		}
	}
	return ret;
}

void do_merge_sort(List &v){
	auto nb = v.size();
	if (nb < 2) {
		return;
	}
	size_t mid = v.size() / 2;
	List left(v.begin(), v.begin() + mid);
	List right(v.begin() + mid, v.end());

	do_merge_sort(left);
	do_merge_sort(right);

	v = merge(left, right);
}
