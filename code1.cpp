#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "Enter a number: ";
    cin >> number;

    if (number % 3 == 0 || number % 5 == 0) {
        cout << " is divisible by 3 or 5." << endl;
    } else {
        cout << " is not divisible by 3 or 5." << endl;
    }

    return 0;
}