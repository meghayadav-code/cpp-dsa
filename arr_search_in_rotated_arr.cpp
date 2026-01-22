#include <iostream>
#include <vector>
using namespace std;
int searchInRotatedArray(vector<int>&arr, int target) {
    int st =0 , end = arr.size()-1;
    while (st <= end){
        int mid = st + (end -st)/2;
        if (arr[mid] == target){
            return mid;
        }
        // left half is sorted
        if (arr[st] <= arr [mid]){
            if ( target >= arr[st] && target <= arr [mid]){
                end = mid -1;
            }else {
                st = mid +1;
            }
        }
        // right half is sorted
        else {
            if ( target >= arr [mid] && target <= arr [end]){
                st = mid +1;
            }else {
                end = mid -1;
            }
        }
    }
    return -1;
}
int main(){
    vector<int> arr = {4,5,6,7,0,1,2};
    int target = 2;
    cout << searchInRotatedArray(arr , target);
    return 0;
}