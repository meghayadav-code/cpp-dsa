//peak index in mountaIin array

#include <iostream>
using namespace std;
int peakIndexInMountainArray(int arr[] , int sz ){
    int st =0 , end =  sz - 1;
    int mid = st + (end - st)/2;
    if (arr[mid-1] < arr[mid] && arr[mid] > arr[mid+1]){
        return mid;
    }
    else if (arr[mid-1] <arr[mid] && arr[mid] < arr[mid+1]){
        st = mid +1;
    }
    else {
        end = mid -1;
    }
}
int main(){
    int arr[] = {0,1,4};
    int sz = 3;
    cout << peakIndexInMountainArray(arr , sz) << endl;
    return 0;
}