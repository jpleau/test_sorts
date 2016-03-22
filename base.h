#ifndef SORTS_BASE_H
#define SORTS_BASE_H

#include <functional>
#include <iostream>
#include <vector>

using List = std::vector<int>;
using ListIterator = List::iterator;
using SortFunction = std::function<void(List &)>;

template <typename Container> void p(Container &list, bool newline = false) {
    for (auto i : list) {
        std::cout << i << ", ";
    }

    if (newline) {
        std::cout << "\n";
    }
}

template <typename Container> void p(std::initializer_list<Container> lists, bool newline = false) {
    for (auto list : lists) {
        p(list, newline);
    }
}

void do_sort(const char *name, SortFunction sort);

#endif
