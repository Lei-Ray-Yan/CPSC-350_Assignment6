/*
- Raymond Raymond
- 2297956
- lyan@chapman.edu
- CPSC-350-01
- Assignment 6

- the main file of the program, combines everything together handles the general flow of the procedures

*/

#include <iostream>
#include "FileProcessor.h"
#include "Sort.h"
#include "QuickSort.h"
#include "MergeSort.h"
#include "SelectionSort.h"
#include "InsertionSort.h"
#include "BubbleSort.h"

using namespace std;


int main(int argc, char **argv){
  //check if having user inputs
  if(argc < 2){
    cout << "Seems like you forgot to provide the command line arguments  :)    " << endl;
    return 1;
  }


  //analysing user input
  string filePath = argv[1];

  //extracting data
  FileProcessor fp(filePath);
  if(!fp.readNumberToDoubleArray()){
    return 1;
  }

  //get length
  fp.readLineToVector();
  string holder =  fp.fileContent[0];
  int arrLength;
  try{
    arrLength = stoi(holder);
    cout << endl;
    cout << "Array Length: " << arrLength;
    cout << endl;
  }
  catch(...){
    cout << "Error: fail to get array length" << endl;
    return 1;
  }


  //create the sorting objects
  QuickSort *qs = new QuickSort(arrLength);
  MergeSort *ms = new MergeSort(arrLength);
  SelectionSort *ss = new SelectionSort(arrLength);
  InsertionSort *is = new InsertionSort(arrLength);
  BubbleSort *bs = new BubbleSort(arrLength);\

  //copying data to objects
  cout << "Copying data to all the sort queues... " << endl;
  qs->copyArrData(fp.doubleArr);
  ms->copyArrData(fp.doubleArr);
  ss->copyArrData(fp.doubleArr);
  is->copyArrData(fp.doubleArr);
  bs->copyArrData(fp.doubleArr);
  cout << "Finished copying data. Going to perfrom the sorting. " << endl;
  cout << endl;


  //perform the sorting and print the time stamps
  int lowIndex = 0;
  int highIndex = arrLength-1;
  //Quick Sort
  qs->performSort(lowIndex, highIndex);
  qs->printAll();
  //Merge Sort
  ms->performSort(lowIndex, highIndex);
  ms->printAll();
  //Selection Sort
  ss->performSort();
  ss->printAll();
  //Insertion Sort
  is->performSort();
  is->printAll();
  //Bubble Sort
  bs->performSort();
  bs->printAll();


  //cleaning up
  delete qs;
  delete ms;
  delete ss;
  delete is;
  delete bs;

  return 0;
}







