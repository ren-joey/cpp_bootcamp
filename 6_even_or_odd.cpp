#include <iostream>
using namespace std;
//
// Created by 任祖頤 on 2024/8/23.
//
int main()
{
    int num;

    while (true)
    {
        cout << "Enter a number: " << endl;
        cin >> num;

        if (!cin.good())
        {
            cout << "Please enter a valid number" << endl;
            cin.clear();
            cin.ignore(INT_MAX, '\n');
        }
        else
        {
            if (num % 2 == 0)
            {
                cout << "Even" << endl;
            }
            else if (num % 2 != 0)
            {
                cout << "Odd" << endl;
            }
            break;
        }
    }

    return 0;
}