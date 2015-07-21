#include "base.h"
#include "bubble_sort.h"
#include "cocktail_sort.h"
#include "gnome_sort.h"
#include "heap_sort.h"
#include "insertion_sort.h"
#include "merge_sort.h"
#include "quick_sort.h"
#include "radix_sort.h"
#include "selection_sort.h"
#include "stooge_sort.h"

int main(int argc, char **argv) {
	std::map<std::string, SortFunction> sorts = {
		{ "heap", do_heap_sort },
		{ "radix", do_radix_sort },
		{ "stooge", do_stooge_sort },
		{ "gnome", do_gnome_sort },
		{ "cocktail", do_cocktail_sort },
		{ "merge", do_merge_sort },
		{ "bubble", do_bubble_sort },
		{ "quick", do_quick_sort },
		{ "insert", do_insertion_sort },
		{ "selection", do_selection_sort },
	};

	if (argc > 1) {
		for (int i = 1; i < argc; ++i) {
			std::string sort_name = argv[i];
			auto it = sorts.find(sort_name);
			if (it != sorts.end()) {
				do_sort(sort_name.c_str(), sorts[sort_name]);
			}
		}
	} else {
		for (auto it = sorts.begin(); it != sorts.end(); ++it) {
			do_sort(it->first.c_str(), it->second);
		}
	}

	return 0;
}
