#include <iostream>
#include <vector>
using namespace std;
int linearsearch(vector<int> &vec, int target){

    for (int i = 0;i<vec.size(); i++){
        if (vec[i] == target) {
            return i;
        }
    }
    return -1;
}
    int main(){
        vector<int> vec = {10,45,67,45,};
        int target = 67;
        int result = linearsearch(vec, target);
        cout << "Element found at index: " << linearsearch(vec,target) << endl;
    
    return 0;
}