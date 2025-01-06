#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    cout << "Enter the first number: ";
    cin >> num1;
    
    cout << "Enter the second number: ";
    cin >> num2;

    if (num1 == num2 * num2) {
        cout << " the first number is the square of the second number" << endl;
    } else {
        cout << " the first number is not the square of the second number" << endl;
    }

    return 0;
}
