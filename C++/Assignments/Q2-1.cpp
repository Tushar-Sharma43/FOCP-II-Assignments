#include <iostream>
#include <vector>
using namespace std;

int main(){
    int size;
    cout<<"Enter the size of the array:  ";
    cin>>size;

    vector<int> arr(size);
    cout<<"Enter the elements for array: ";

    for(int i=0; i<size; i++){
        cin>>arr[i];
    }

    return 0;
}