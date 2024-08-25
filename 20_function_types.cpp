#include <iostream>

using namespace std;

// Functions:
// 1. has no arguments and no return values
// 2. has arguments but no return values
// 3. has no arguments and has return values
// 4. has arguments and return values

void prime()
{
    int num, count = 1;

    cout << "Please enter your number: ";
    cin >> num;

    for (int i = 2; i <= num; i += 1)
    {
        if (num % i == 0)
        {
            count += 1;
        }
        if (count > 2) break;
    }

    if (count == 2)
    {
        cout << num << " is a prime number." << endl;
    }
    else
    {
        cout << num << " is not a prime number." << endl;
    }
}

int main()
{
    prime();
    return 0;
}