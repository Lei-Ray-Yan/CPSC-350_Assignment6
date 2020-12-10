/*
- Raymond Raymond
- 2297956
- lyan@chapman.edu
- CPSC-350-01
- Assignment 6

- the bubble sort algorithm, which scans through the entire array, comparing each element to the next, swp if greater than next

*/

#ifndef BUBBLESORT_H
#define BUBBLESORT_H

#include <iostream>
#include "Sort.h"

using namespace std;


class BubbleSort : public Sort{
private:
public:
  using Sort :: Sort;

  void performSort();

  void printAll();

};

#endif











