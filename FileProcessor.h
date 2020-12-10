/*
- Raymond Raymond
- 2297956
- lyan@chapman.edu
- CPSC-350-01
- Assignment 6

- a general file processor class, handles everything about reading, storing and writing data to and from a file.

*/

#ifndef FILEPROCESSOR_H
#define FILEPROCESSOR_H

#include <iostream>
#include <vector>
#include <fstream>

using namespace std;


class FileProcessor{
public:
  string filePath;
  vector<string> fileContent;
  int lineCount = 0;
  bool fileExists;
  double *doubleArr;

  FileProcessor();
  ~FileProcessor();
  FileProcessor(string newFilePath);

  /*
  * Read data from file and store them in class attributes.
  */
  bool readLineToVector();
  bool readNumberToDoubleArray(); //specific format of file content required
  /*
  * Write to file 
  */
  bool writeToFile(string content);

  void outputContentToConsole();

};


#endif










