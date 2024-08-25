#include <iostream>
#include <stdexcept>

using namespace std;

void print(int num)
{
    if (num > 0)
    {
        cout << "Hello World [" << num << "]" << endl;
        print(num - 1);
    }
}

int hierarchy(int num)
{
    if (num < 0) throw invalid_argument("Invalid number");
    else if (num == 1 || num == 0) return 1;
    return num * hierarchy(num - 1);
}

int main()
{
    print(10);

    int num;
    while (true)
    {
        cout << "Enter any positive number: ";
        cin >> num;
        if (!cin.good() || num < 0)
        {
            cout << "Invalid number" << endl;
            cin.clear();
            cin.ignore();
        } else break;
    }
    cout << num << "! = " << hierarchy(num) << endl;
    return 0;
}