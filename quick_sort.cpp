#include "quick_sort.h"

void do_quick_sort_recursive(List &v, size_t first, size_t last) {
    if (first < last) {
        // Pivot is last element
        size_t pivot_index = first;
        auto pivot = v[last];

        // Put stuff < pivot to the left
        for (size_t i = first; i < last; ++i) {
            if (v[i] < pivot) {
                std::swap(v[i], v[pivot_index]);
                pivot_index++;
            }
        }

        // Swap pivot
        std::swap(v[last], v[pivot_index]);

        do_quick_sort_recursive(v, first, pivot_index - 1);
        do_quick_sort_recursive(v, pivot_index + 1, last);
    }
}

void do_quick_sort(List &v) {
    do_quick_sort_recursive(v, 0, v.size() - 1);
}
