#include <iostream>
using namespace std;
  int main() {
    int nums [] = { 5, 15 , 22, -15 , 24};
    int size = 5;
    int smallest = nums[0];  //assume first ellement is min
    int largest = nums[0]; // assume first ellement is max
    for (int i=0; i< size; i++){
    //   if (nums[i] < smallest){
    //     smallest = nums[i];
    //   }
      smallest =min(nums[i] , smallest);
      largest = max (nums[i], largest);
      }
    cout << "smallest = " << smallest << endl;
    cout << "largest = " << largest << endl;
 return 0;
}