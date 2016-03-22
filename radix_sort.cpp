#include <cmath>

#include "radix_sort.h"

auto create_radix_list(List &v, int n) {
    RadixList l;
    for (auto i : v) {
        int m = i % static_cast<int>(std::pow(10, n + 1));
        int key = m / static_cast<int>(std::pow(10, n));
        l[key].push_back(i);
    }
    return l;
}

void do_radix_sort(List &v) {
    int n = 0;
    RadixList t = create_radix_list(v, n);
    while (t.size() > 1) {
        v.clear();
        for (auto it = t.begin(); it != t.end(); ++it) {
            auto vec = it->second;
            for (auto i : vec) {
                v.push_back(i);
            }
        }
        t = create_radix_list(v, ++n);
    }
}
