#include <iostream>

using namespace std;

int main()
{
    int num1, num2;
    char opt;
    bool optCheck = false;
    float res;

    while (true)
    {
        cout << "Enter the first number: ";
        cin >> num1;
        if (!cin.good())
        {
            cout << "Invalid number." << endl;
            cin.clear();
            cin.ignore();
        }
        else break;
    }

    while (true)
    {
        cout << "Enter the second number: ";
        cin >> num2;
        if (!cin.good())
        {
            cout << "Invalid number." << endl;
            cin.clear();
            cin.ignore();
        }
        else break;
    }

    while (true)
    {
        cout << "Enter the operator for these two numbers (valid operator: +, -, *, /): ";
        cin >> opt;

        switch (opt)
        {
        case '+':
            optCheck = true;
            res = num1 + num2;
            cout << num1 << " + " << num2 << " = ";
            break;
        case '-':
            optCheck = true;
            res = num1 - num2;
            cout << num1 << " - " << num2 << " = ";
            break;
        case '*':
            optCheck = true;
            res = num1 * num2;
            cout << num1 << " * " << num2 << " = ";
            break;
        case '/':
            optCheck = true;
            res = (float)num1 / num2;
            cout << num1 << " / " << num2 << " = ";
            break;
        default:
            break;
        }

        if (optCheck) break;
        else {
            cout << "Invalid operator." << endl;
        }
    }

    cout << res << endl;

    return 0;
}