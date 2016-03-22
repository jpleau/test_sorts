#include "bubble_sort.h"

void do_bubble_sort(List &v) {
    bool swapped = true;
    while (swapped) {
        swapped = false;
        for (size_t i = 1; i < v.size(); ++i) {
            if (v[i - 1] > v[i]) {
                std::swap(v[i - 1], v[i]);
                swapped = true;
            }
        }
    }
}
