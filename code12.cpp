#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "Enter a number: ";
    cin >> number;

    if (number > 0) 
    {
        cout << "The number is positive. ";
    
        if (number > 100) {
            cout << "It is greater than 100." << endl;
        } else {
            cout << "It is not greater than 100." << endl;
        }
    } 
    else if (number < 0) {
        cout << "The number is negative." << endl;
    } else {
        cout << "The number is zero." << endl;
    }

    return 0;
}
