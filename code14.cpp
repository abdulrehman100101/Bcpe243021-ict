#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "Enter a number: ";
    cin >> number;

    if (number % 2 == 0 && number % 3 == 0) 
    {
        cout << "The number is divisible by both 2 and 3. ";
   
        if (number % 6 == 0) {
            cout << "It is also divisible by 6." << endl;
        } else {
            cout << "But it is not divisible by 6." << endl;
        }
    } 
    else {
        cout << "The number is not divisible by both 2 and 3." << endl;
    }

    return 0;
}
