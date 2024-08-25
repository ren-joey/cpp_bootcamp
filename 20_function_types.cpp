#include <iostream>

using namespace std;

/**
 * Types of Functions:
 * 1. has no arguments and no return values
 *      void test() {}
 * 2. has arguments but no return values
 *      void test(int num) {}
 * 3. has no arguments and has return values
 *      int test() {return num}
 * 4. has arguments and return values
 *      int test(int num) {return num}
 */

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