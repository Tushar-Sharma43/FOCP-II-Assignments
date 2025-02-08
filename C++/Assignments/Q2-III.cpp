#include <iostream>
#include <algorithm>
using namespace std;

int secondSmallest(int arr[], int size){
    sort(arr,arr+size);
    return arr[1];
}

int secondLargest(int arr[], int size){
    sort(arr,arr+size);
    return arr[size-2];
}


int main(){
    int size,value_1,value_2;
    cout<<"Enter the size of the array:  ";
    cin>>size;

    int arr[size];
    
    cout<<"Enter the elements for array: ";
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }

    value_1 = secondSmallest(arr,size);
    cout<<"Second smallest number: "<<value_1<<endl;

    value_2 = secondLargest(arr,size);
    cout<<"Second Largest number: "<<value_2<<endl;

    return 0;
    
}