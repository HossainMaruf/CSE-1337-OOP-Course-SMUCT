#include <iostream>
using namespace std;

int main() {

  // int marks[5] = {10, 20, 30, 40, 50}; // Optional Size and Initialization List

  // for(int i=0; i<5; i++) {
  //   cout << marks[i] << " ";
  // }

  // float marks[] = {10.2, 23.2, 82.23, 1.3, 234.23};
  // int len = sizeof(marks) / sizeof(marks[0]);

  // cout << "Length: " << len << endl;

  // for(int i=0; i<len; i++) {
  //   cout << marks[i] << " ";
  // }

  /**
   * Character Array and String in C
  */
  char myArray[] =  {'M', 'A', 'R', 'U', 'F'};
  int len = sizeof(myArray) / sizeof(myArray[0]);
  for(int i=0; i<len; i++) {
    cout << myArray[i] << " ";
  }

  cout << endl;

  char myName[] = {'M', 'A', 'R', 'U', 'F', '\0'};
  // char myName[] = "MARUF";
  cout << myName << endl;

  return 0;
}