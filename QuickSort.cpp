/*
- Raymond Raymond
- 2297956
- lyan@chapman.edu
- CPSC-350-01
- Assignment 6

- the implementation of QuickSort.h

*/

#include "QuickSort.h"


//core functions
void QuickSort :: performSort(int lowIndex, int highIndex){
  recordTimeStart();

  quickSort(lowIndex, highIndex);

  recordTimeEnd();
}

void QuickSort :: quickSort(int lowIndex, int highIndex){
  if(lowIndex >= highIndex){
    return;
  }
  int endIndex = partition(lowIndex, highIndex);
  performSort(lowIndex, endIndex);
  performSort(endIndex+1, highIndex);
}

int QuickSort :: partition(int lowIndex, int highIndex){
  int midPoint = lowIndex + (highIndex - lowIndex)/ 2;
  double pivot = arrData[midPoint];

  bool isDone = false;
  while(!isDone){
    //scan through low partition
    while(arrData[lowIndex] < pivot){
      lowIndex += 1;
    }
    //scan through high partition
    while(pivot < arrData[highIndex]){
      highIndex -= 1;
    }
    //if 2 indexes reaches, then done
    if(lowIndex >= highIndex){
      isDone = true;
    }
    else{
      //swap the numbers in the 2 index
      double temp = arrData[lowIndex];
      arrData[lowIndex] = arrData[highIndex];
      arrData[highIndex] = temp;
      lowIndex += 1;
      highIndex -= 1;
    }
  }

  return highIndex;
}


//assisting function
void QuickSort :: printAll(){
    cout << "QuickSort: " << endl;
    Sort :: printAll();
    cout << endl;
}






