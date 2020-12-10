/*
- Raymond Raymond
- 2297956
- lyan@chapman.edu
- CPSC-350-01
- Assignment 6

- the insertion sort, which scans through the entire array, swap the current through the scanned portion until it reaches a smaller value or the front end. 

*/

#ifndef INSERTIONSORT_H
#define INSERTIONSORT_H

#include <iostream>
#include "Sort.h"

using namespace std;


class InsertionSort : public Sort{
private:
public:
  using Sort :: Sort;

  void performSort();

  void printAll();

};

#endif











