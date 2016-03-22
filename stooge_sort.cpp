#include <cmath>

#include "stooge_sort.h"

void do_stooge_sort_iterators(List &v, ListIterator begin, ListIterator end) {
    if (*begin > *(end - 1)) {
        std::swap(*begin, *(end - 1));
    }
    auto nb = static_cast<double>(end - begin);
    if (nb > 2) {
        size_t split = std::floor(nb * ONE_THIRD);
        do_stooge_sort_iterators(v, begin, end - split);
        do_stooge_sort_iterators(v, begin + split, end);
        do_stooge_sort_iterators(v, begin, end - split);
    }
}

void do_stooge_sort(List &v) {
    do_stooge_sort_iterators(v, v.begin(), v.end());
}
