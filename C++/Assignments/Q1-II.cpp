#include <iostream>
using namespace std;

int main(){
    int num, i, count = 0;
    cout<<"Enter the number: ";
    cin>>num;
    if(num > 0){
        if(num == 1) cout<<"Not a prime number";
        else if(num == 2) cout<<"It is a prime number";
        
        for(i=2; i<num; i++){
            if(num%i == 0){
                count++;
            }
        }
        if(count > 0){
            cout<<"Not a prime number"<<endl;
            cout<<"Factors are: ";
            for(i=0; i<num; i++){
                if(num%i == 0){
                    cout<<i<<" ";
                }
            }
        } 
        else cout<<"It is a prime number";
    }
    return 0;
}

