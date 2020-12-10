/*
- Raymond Raymond
- 2297956
- lyan@chapman.edu
- CPSC-350-01
- Assignment 6

- implementation of BubbleSort.h

*/

#include "BubbleSort.h"


//core functions
void BubbleSort :: performSort(){
  recordTimeStart();

  //scan through the entire array
  for(int i=0; i<arrSize-1; ++i){
    double temp = 0;
    //during each scan, take each element from the beginning, compare to the next, if greater, swap, until the bottom
    //since for each inner loop, we are guranteed to remove the current greatest element to the bottom, thus the quantity(bottom) of comparison can be decreased by i to save some time.
    for(int j=0; j<arrSize-1-i; ++j){
      if(arrData[j]>arrData[j+1]){
        temp = arrData[j+1];
        arrData[j+1] = arrData[j];
        arrData[j] = temp;
      }
    }
  }

  recordTimeEnd();
}


//assisting function
void BubbleSort :: printAll(){
    cout << "BubbleSort: " << endl;
    Sort :: printAll();
    cout << endl;
}






