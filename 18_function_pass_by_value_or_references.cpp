#include <iostream>

using namespace std;

// pass by value
void swap(int num1, int num2)
{
    int temp;
    temp = num1;
    num1 = num2;
    num2 = temp;

    /**
     * Each function can only return one value in it until introducing "decision control"
     * In this case, it is impossible to swap two value in a pass-by-value function
     */
}

// pass by reference
void swap_by_ref(int &num1, int &num2)
{
    int temp;
    temp = num1;
    num1 = num2;
    num2 = temp;
}

// pass by reference (using pointer)
// will also work
void swap_by_ref_addr(int *num1, int *num2)
{
    int temp;
    temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

int main()
{
    int num1 = 9, num2 = 7, temp;
    cout << "num1 = " << num1 << ", num2 = " << num2 << endl;
    swap(num1, num2);
    cout << "After a pass-by-value swap function, it's nothing changed" << endl;
    cout << "num1 = " << num1 << ", num2 = " << num2 << endl;
    swap_by_ref(num1, num2);
    cout << "After a pass-by-reference swap function, it changed successfully" << endl;
    cout << "num1 = " << num1 << ", num2 = " << num2 << endl;
    swap_by_ref_addr(&num1, &num2);
    cout << "After a pass-by-reference swap function (using pointer), it changed successfully" << endl;
    cout << "num1 = " << num1 << ", num2 = " << num2 << endl;
    return 0;
}