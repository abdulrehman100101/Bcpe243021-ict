#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "Enter a number: ";
    cin >> number;

    if (number > 0) 
    {
        cout << "The number is positive. ";

        if (number % 5 == 0) {
            cout << "It is divisible by 5." << endl;
        } else {
            cout << "It is not divisible by 5." << endl;
        }
    }
     else if (number < 0) {
        cout << "The number is negative." << endl;
    } else {
        cout << "The number is zero." << endl;
    }

    return 0;
}
