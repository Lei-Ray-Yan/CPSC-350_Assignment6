/*
- Raymond Raymond
- 2297956
- lyan@chapman.edu
- CPSC-350-01
- Assignment 6

- the implementation of SelectionSort.h

*/

#include "SelectionSort.h"


//core functions
void SelectionSort :: performSort(){
  recordTimeStart();

  for(int i=0; i<arrSize-1; ++i){
    //find the smallest remaining element
    int index = i;  //index of the smallest number
    for(int j=i+1; j<arrSize; ++j){
      if(arrData[j]<arrData[index]){
        index = j;
      }
    }
    //swap the number in the current position with the smallest number
    double temp = arrData[i];
    arrData[i] = arrData[index];
    arrData[index] = temp;
  }

  recordTimeEnd();
}


//assisting function
void SelectionSort :: printAll(){
    cout << "SelectionSort: " << endl;
    Sort :: printAll();
    cout << endl;
}






