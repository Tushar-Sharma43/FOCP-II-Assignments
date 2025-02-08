#include <iostream>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) return false;
    if (num == 2) return true;  
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) return false;  
    }
    return true;
}

int nextPrime(int num) {
    num++; 
    while (!isPrime(num)) {
        num++;
    }
    return num;  
}

int main() {
    int num;
    cout << "Enter the number: ";
    cin >> num;

    if (num > 0) {
        if (isPrime(num)) {
            cout << "It is a prime number"<<endl<<"The next prime is: " << nextPrime(num) << endl;
        } else {
            cout << "Not a prime number" << endl;
        }
    }
    return 0;
}
