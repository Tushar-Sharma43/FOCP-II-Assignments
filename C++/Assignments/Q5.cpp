#include <iostream>
using namespace std;

int main(){
    int arr[3][3], i, j, rotated_matrix[3][3] = {0};
    cout<<"Provide array elements: ";
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            cin>>arr[i][j];
        }
    }
    cout<<"Original matrix: "<<endl;
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            cout<<"\t"<<arr[i][j];
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<"Rotated Matrix: "<<endl;
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            rotated_matrix[j][2-i] = arr[i][j];
        }
    }

    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            cout<<"\t"<<rotated_matrix[i][j];
        }
        cout<<endl;
    }
}