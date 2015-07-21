#include <map>

#include "base.h"

const int BASE = 10;
using RadixList = std::map<int, List>;

RadixList create_radix_list(List &v, int n);
void do_radix_sort(List &v);
