#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
int maxArea (vector<int>& height){
    int n = height.size();
    int maxWater = 0;
    for ( int i =0; i<n; i++){
        for (int j = i+1; j<n; j++){
            int w = j-i;
            int h = min(height[i],height[j]);
            int currwater = w*h;
            maxWater = max(maxWater,currwater);
            
        }

    }
    return maxWater;
}
int main(){
    vector<int> height= {1,2,6,4,8,9};
    cout <<maxArea(height);
    return 0;

}
