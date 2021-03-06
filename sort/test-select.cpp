// Copyright 2015 Towry Wang (http://towry.me)
// MIT Licensed

#include "../include/sort.hpp"

namespace sort {
  void select (int[], int);
}

int main () {
  int test[] = {3, 6, 2, 12, 5, 11};

  walltime::start();
  sort::select(test, LENGTHOF(test));
  walltime::end();

  printer<int>(test, LENGTHOF(test));

  return 0;
}
