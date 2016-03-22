#include "base.h"

void do_sort(const char *name, SortFunction sort) {
    List v = {
        13, 29, 12, 16, 25, 17, 18, 30, 27, 10, 4,  23, 20, 3,  1, 24,
        26, 19, 14, 31, 9,  6,  22, 8,  2,  15, 21, 28, 7,  11, 5,
    };

    std::cout << "Sort: " << name << std::endl;
    sort(v);
    p(v, true);
}
