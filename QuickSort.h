/*
- Raymond Raymond
- 2297956
- lyan@chapman.edu
- CPSC-350-01
- Assignment 6

- the quick sort, which divides the array to 2 partitions, scan through each one until find a value smaller or larger than the middle value, does this for every "halves" of the array

*/

#ifndef QUICKSORT_H
#define QUICKSORT_H

#include <iostream>
#include "Sort.h"

using namespace std;


class QuickSort : public Sort{
private:
public:
  using Sort :: Sort;

  void performSort(int lowIndex, int highIndex);
  void quickSort(int lowIndex, int highIndex); 
  int partition(int lowIndex, int highIndex);

  void printAll();

};

#endif







