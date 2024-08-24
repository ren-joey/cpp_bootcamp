#include <iostream>

using namespace std;

// declare the function name
void print_something();
float add(float, float);

int main ()
{
    print_something();
    print_something();
    print_something();

    float num1 = 3.12, num2 = 5.17;
    float sum = add(num1, num2);
    cout << sum << endl;
    cout << add(7.554, 83.1997) << endl;

    return 0;
}

// define the function
void print_something()
{
    cout << "printing..." << endl;
}

float add(float num1, float num2)
{
    return num1 + num2;
}