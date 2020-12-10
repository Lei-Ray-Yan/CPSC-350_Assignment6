/*
- Raymond Raymond
- 2297956
- lyan@chapman.edu
- CPSC-350-01
- Assignment 6

- the base class of all sort algorithm classes, defines general methods and attributes for them.

*/

#ifndef SORT_H
#define SORT_H

#include <iostream>
#include <sstream>
#include <ctime>

using namespace std;


class Sort{
private:
public:
  /*
  * for data storing and iterating
  */
  int arrSize;
  double *arrData; //array of data
  /*
  * for time stamp
  */
  string timeStart;
  string timeEnd;

  Sort();
  ~Sort();
  Sort(int n);

  /*
  * for time stamp
  */
  void recordTimeStart();
  void recordTimeEnd();
  /*
  * deep copy data from a given dynamic array
  */
  void copyArrData(double *arr);
  /*
  * output all data in the stroing array
  */
  void printArrData();
  /*
  * output designated information, like class name, time stamp, etc
  */
  void printAll();

};


#endif




