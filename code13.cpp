#include <iostream>
using namespace std;

int main() {
    char ch;

    cout << "Enter a character: ";
    cin >> ch;

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') 
        {  
        cout << "The character is a vowel. ";

        if (ch >= 'a' && ch <= 'z') {
            cout << "It is a lowercase vowel." << endl;
        } else {
            cout << "It is an uppercase vowel." << endl;
        }
        } 
    else {
        cout << "The character is a consonant." << endl;
    }

    return 0;
}