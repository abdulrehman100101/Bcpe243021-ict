#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "Enter a number: ";
    cin >> number;

    if (number > 10) {
        cout << "The cube is " << (number * number * number) << "." << endl;
    }

    return 0;
}
