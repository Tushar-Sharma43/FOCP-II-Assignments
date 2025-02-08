#include <iostream>
using namespace std;

void reverseArray(int array[],int size){
    for(int i=0; i<size/2; i++){
        int tempArr = array[i];
        array[i] = array[size-i-1];
        array[size-i-1] = tempArr;
    }
}

int main(){
    int size;
    cout<<"Enter the size of the array:  ";
    cin>>size;

    int arr[size];
    
    cout<<"Enter the elements for array: ";
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }

    reverseArray(arr,size);

    cout<<"Reversed Array : ";
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    return 0;
}