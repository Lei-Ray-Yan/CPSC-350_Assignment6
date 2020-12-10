/*
- Raymond Raymond
- 2297956
- lyan@chapman.edu
- CPSC-350-01
- Assignment 6

- the implementation of Sort.h

*/

#include "Sort.h"

using namespace std;


//constructor destructor
Sort :: Sort(){
  arrSize = 128;
  arrData = new double[arrSize];
  timeStart = "";
  timeEnd = "";
}

Sort :: ~Sort(){
  delete arrData;
}

Sort :: Sort(int n){
  arrSize = n;
  arrData = new double[arrSize];
  timeStart = "";
  timeEnd = "";
}


//assisting functions
void Sort :: recordTimeStart(){
  time_t rawTime;
  time(&rawTime);
  timeStart = ctime(&rawTime);
}

void Sort :: recordTimeEnd(){
  time_t rawTime; 
  time(&rawTime);
  timeEnd = ctime(&rawTime);
}

void Sort :: copyArrData(double *arr){
  try{
    for(int i=0; i<arrSize; ++i){
      arrData[i] = arr[i];
    }
  }catch(...){
    cout << "Error: error during copying data array to the sorter, please recheck the given size. " << endl;
    return;
  }
}

void Sort :: printArrData(){
  cout << "Array Data: ";
  for(int i=0; i<arrSize; ++i){
    cout << " " << arrData[i] << " ";
  }
  cout << endl;
}

void Sort :: printAll(){
  //printArrData();
  cout << "Start time: " << timeStart;
  cout << "End time: " << timeEnd;
}







