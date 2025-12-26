#include <iostream>
using namespace std;
int main(){
    int n= 5;
    int arr[n] = {1, -2, 3, 4, -5};
    int maxsum = INT32_MIN;
    for (int st =0; st<n;st++){
        int currsum =0;
        for (int end=st; end<n;end++){

            currsum += arr[end];
            maxsum = max (maxsum, currsum);
            
        }
        } 
        cout<<"max sum aubaaray sum="<< maxsum << endl;
    

    return 0;
}