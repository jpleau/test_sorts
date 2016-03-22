#include "heap_sort.h"
#include "heap.h"

void do_heap_sort(List &v) {
    List ret;

    auto comp = [](auto x, auto y) { return x > y; };

    Heap<List::value_type> heap(comp);
    for (auto i : v) {
        heap.insert(i);
    }

    while (!heap.empty()) {
        ret.push_back(heap.pop_root());
    }

    v = ret;
}
