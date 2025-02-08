#include <iostream>
#include <string>
#include <cctype>

using namespace std;

void replaceVowels(string &str) {
    for (int i = 0; i < str.length(); i++) {
        char ch = tolower(str[i]);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            str[i] = '*';
        }
    }
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);
    replaceVowels(input);

    cout << "Modified string: " << input << endl;

    return 0;
}
