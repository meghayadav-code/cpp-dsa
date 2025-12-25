#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <char> vec = {'a' , 'b', 'c', 'd'};
    cout << "Size of vector is: " << vec.size() << endl;
    vec.push_back('e');
    cout << "New size of vector after push_back is: " << vec.size() << endl;
    cout<<"vector capacity is ="<< vec.capacity() <<endl;
    cout<< vec.back() << endl; //prints last element
    cout << vec.front() << endl; //prints first element
    cout << vec.at(2) << endl; //prints element at index 2
    
    
    for (char i : vec){   //for each loops
        cout << i << endl;    
    }
    return 0;

}
