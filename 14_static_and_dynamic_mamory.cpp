#include <iostream>

using namespace std;

int main ()
{
    /**
     * static memory(smaller) -> stake memory -> compile time
     * dynamic memory(far larger) -> heap memory -> run time
     */

    // Static memory allocation
    int staticVar = 10; // 4 bytes of memory spaces will be allocated when compiling
    cout << "Static variable = " << staticVar << endl;

    // Dynamic memory allocation
    int *dynamicVar = new int;  // the keyword "new" will request memory spaces which can contain integer type just right
                                // memory spaces will be allocated when running, it is better to delete it after using it
    *dynamicVar = 20;
    cout << "Dynamic variable = " << *dynamicVar << endl;
    delete dynamicVar;
    // suit for dealing with larger amount of memory data and prevent memory leakages

    return 0;
}