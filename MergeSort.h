/*
- Raymond Raymond
- 2297956
- lyan@chapman.edu
- CPSC-350-01
- Assignment 6

- the merge sort, which divides the array to the smallest elements, and merge back by inserting the smaller element of the 2 sides of each division first

*/

#ifndef MERGESORT_H
#define MERGESORT_H

#include <iostream>
#include "Sort.h"

using namespace std;


class MergeSort : public Sort{
private:
public:
  using Sort :: Sort;

  void performSort(int lowIndex, int highIndex);
  void mergeSort(int lowIndex, int highIndex);
  void merge(int low, int mid, int high);

  void printAll();

};

#endif











