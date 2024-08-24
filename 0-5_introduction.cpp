#include <iostream>

using namespace std;

int main() {
    int age = 18;
    float pi = 3.14;
    int int_pi = pi;

    cout << "pi = " << pi << endl;
    cout << "pi = " << (int)pi << endl;
    cout << "int_pi = " << int_pi << endl;
    // cin >> age; // input data from terminal
    // cout << age;

    bool var_true = true;

    cout << (10 > 20) << endl;
    cout << var_true << endl;

    char data;
    cin >> data;
    switch (data) {
        case '1':
        case '2':
        case '3':
            cout << "good: " << data << endl;
            break;
        default:
            cout << "bad: " << data << endl;
    }
}