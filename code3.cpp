#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "Enter a number: ";
    cin >> number;

    if (number % 2 == 0) {
        cout << " is even." << endl;
    } else {
        cout << " is odd." << endl;
    }

    return 0;
}