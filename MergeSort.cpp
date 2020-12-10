/*
- Raymond Raymond
- 2297956
- lyan@chapman.edu
- CPSC-350-01
- Assignment 6

- the implementation of MergeSort.h

*/

#include "MergeSort.h"


//core functions
void MergeSort :: performSort(int lowIndex, int highIndex){
  recordTimeStart();

  mergeSort(lowIndex, highIndex);

  recordTimeEnd();
}

void MergeSort :: mergeSort(int lowIndex, int highIndex){
  int midIndex = 0;
  if(lowIndex < highIndex){
    midIndex = (lowIndex + highIndex)/ 2;

    performSort(lowIndex, midIndex);
    performSort(midIndex+1, highIndex);
    merge(lowIndex, midIndex, highIndex);
  }
}

void MergeSort :: merge(int low, int mid, int high){
  int mergedSize = high - low + 1;
  int mergePos = 0;
  int leftPos = 0;
  int rightPos = 0;
  double *mergedNumbers = new double[mergedSize];

  leftPos = low;
  rightPos = mid + 1;

  //add smallest element from pair of low and high partition to merged numbers
  while(leftPos <= mid && rightPos <= high){
    if(arrData[leftPos] <= arrData[rightPos]){
      mergedNumbers[mergePos] = arrData[leftPos];
      ++leftPos;
    }
    else{
      mergedNumbers[mergePos] = arrData[rightPos];
      ++rightPos;
    }
    ++mergePos;
  }

  //if low/ high partition is not empty, add remaining lements to merged numbers
  while(leftPos <= mid){
    mergedNumbers[mergePos] = arrData[leftPos];
    ++leftPos;
    ++mergePos;
  }
  while(rightPos <= high){
    mergedNumbers[mergePos] = arrData[rightPos];
    ++rightPos;
    ++mergePos;
  }
  //copy merged number back to original array
  for(mergePos = 0; mergePos < mergedSize; ++mergePos){
    arrData[low+mergePos] = mergedNumbers[mergePos];
  }
}


//assisting function
void MergeSort :: printAll(){
    cout << "MergeSort: " << endl;
    Sort :: printAll();
    cout << endl;
}






