#include <iostream>
using namespace std;
int linerSearch(int arr[] , int sz , int target){
  for (int i = 0; i<sz ; i++){
    if (arr[i] == target){
      return i;
    }

  }
  return -1;
 }

 int main(){
  int arr[] = { 4,2,7,9,6};
  int sz = 5;
  int target = 7;
  cout << "index of target = " << linerSearch(arr , sz , target) << endl;
 
  return 0;
 }
