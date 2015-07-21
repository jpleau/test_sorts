#include "base.h"
#include "bubble_sort.h"
#include "cocktail_sort.h"
#include "gnome_sort.h"
#include "insertion_sort.h"
#include "merge_sort.h"
#include "quick_sort.h"
#include "selection_sort.h"
#include "stooge_sort.h"

int main() {

	/*
	 *do_sort("Stooge", do_stooge_sort);
	 *do_sort("Gnome", do_gnome_sort);
	 *do_sort("Cocktail", do_cocktail_sort);
	 *do_sort("Merge", do_merge_sort);
	 *do_sort("Bubble", do_bubble_sort);
	 *do_sort("Quick", do_quick_sort);
	 *do_sort("Insert", do_insertion_sort);
	 */
	do_sort("Selection", do_selection_sort);

	return 0;
}
