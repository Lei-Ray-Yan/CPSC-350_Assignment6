/*
- Raymond Raymond
- 2297956
- lyan@chapman.edu
- CPSC-350-01
- Assignment 6

- the selection sort, scan through the entire array and finds the current smallest value, insert the the correction corresponding possition 

*/

#ifndef SELECTIONSORT_H
#define SELECTIONSORT_H

#include <iostream>
#include "Sort.h"

using namespace std;


class SelectionSort : public Sort{
private:
public:
  using Sort :: Sort;

  void performSort();

  void printAll();

};

#endif











