#include <iostream>
using namespace std;

int main() {
    int age;

    cout << "Enter your age: ";
    cin >> age;

    if (age >= 18) {
        cout << "You are eligible to make id card." << endl;
    } else {
        cout << "You are not eligible to make id card." << endl;
    }

    return 0;
}
