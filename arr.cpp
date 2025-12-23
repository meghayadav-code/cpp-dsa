// array
#include <iostream>
using namespace std;
int main() {   //declaration and initialization
  int marks [5] = { 99, 100, 54, 36, 88};
  cout << marks [0] << endl;  //99
  cout << marks [1] << endl; //100
  int size = 5;
  // size of array
 int sz = sizeof(marks) / sizeof(int);
 cout << sizeof(marks) / sizeof(int) << endl;   //5
 // print all elements
  for (int i =0; i<size; i++){
    cout << marks[i] << " " << endl;
  }
  return 0;
 }
