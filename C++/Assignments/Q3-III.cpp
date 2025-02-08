#include <iostream>
#include <string>
#include <cctype>

using namespace std;

void displayFrequency(const string &str) {
    int freq[26] = {0};
    
    for (int i = 0; i < str.length(); i++) {
        char ch = str[i];
        ch = tolower(ch);
        
        if (isalpha(ch)) {
            freq[ch - 'a']++;
        }
    }
    
    cout << "Character frequencies:" << endl;
    for (int i = 0; i < 26; i++) {
        if (freq[i] > 0) {
            cout << char(i + 'a') << ": " << freq[i] << endl;
        }
    }
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);
    
    displayFrequency(input);
    
    return 0;
}
