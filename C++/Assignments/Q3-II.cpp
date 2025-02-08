#include <iostream>
#include <string>  
#include <algorithm>  

using namespace std;

bool isPalindrome(string str) {

    string original = str;
    transform(str.begin(), str.end(), str.begin(), ::tolower);  

  
    int start = 0;
    int end = str.length() - 1;
    
    while(start < end) {
        if(str[start] != str[end]) {
            return false; 
        }
        start++;
        end--;
    }
    
    return true; 
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);  
    
    
    input.erase(remove(input.begin(), input.end(), ' '), input.end());
    
    if(isPalindrome(input)) {
        cout << "Is a palindrome!" << endl;
    } else {
        cout << "Not a palindrome!" << endl;
    }
    
    return 0;
}
