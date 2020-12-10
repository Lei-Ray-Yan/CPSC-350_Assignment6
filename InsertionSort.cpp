/*
- Raymond Raymond
- 2297956
- lyan@chapman.edu
- CPSC-350-01
- Assignment 6

- the implementation of InsertionSort.h 

*/

#include "InsertionSort.h"


//core functions
void InsertionSort :: performSort(){
  recordTimeStart();

  for(int i=0; i<arrSize; ++i){
    int j=i;
    //scan through numbers before current i, and keep swappong the current number forward until it reach a smaller value or end
    while(j>0 && arrData[j]<arrData[j-1]){
      double temp = arrData[j];
      arrData[j] = arrData[j-1];
      arrData[j-1] = temp;
      --j;
    }
  }

  recordTimeEnd();
}


//assisting function
void InsertionSort :: printAll(){
    cout << "InsertionSort: " << endl;
    Sort :: printAll();
    cout << endl;
}






