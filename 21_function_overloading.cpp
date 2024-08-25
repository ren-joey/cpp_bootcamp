#include <iostream>

using namespace std;

// Function overloading is:
// same function name but different arguments
void test(int num);
void test();

int main()
{
    int num;
    cout << "enter the num: ";
    cin >> num;
    test(num);
    test();
    return 0;
}

void test(int num)
{
    cout << "<<function definition 1>>" << endl;

    cout << "num = " << num << endl;
}
void test()
{
    cout << "<<function definition 2>>" << endl;

    int num;
    cout << "enter the num: ";
    cin >> num;
    cout << "num = " << num << endl;
}