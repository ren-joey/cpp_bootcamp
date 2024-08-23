#include <iostream>

using namespace std;

int main ()
{
    // the data type of variable and *ptr should match
    int var = 99;
    int *ptr = NULL;
    ptr = &var;
    // ptr = var; // incorrect expression, because *ptr can only be assigned by a memory address, not a value

    // address
    cout << ptr << endl;
    cout << &var << endl;

    // value
    cout << *ptr << endl;
    cout << var << endl;

    // copy concept
    int a = 10, b = a;
    b = 11;
    cout << "a = " << a << ", b = " << b << endl;

    // address concept
    int c = 5, *d = &c, **dd = &d;
    *d = 4;
    cout << "c = " << c << ", d = " << *d << ", dd = " << **dd << endl;
    *d -= 1;
    cout << "c = " << c << ", d = " << *d << ", dd = " << **dd << endl;
    c = pow(*d, 2);
    cout << "c = " << c << ", d = " << *d << ", dd = " << **dd << endl;

    // address concept
    // int 5 in memory is (4 bytes):  00000000 00000000 00000000 00000101
    // int -5 in memory is (4 bytes): 11111111 11111111 11111111 11111011 (2's complement)
    // the first block of 4 bytes in case of -5 should be 250
    // and 2nd~4th blocks should all be 255
    int e = -5;
    char *f = (char *)&e;
    cout << "e = " << e << ", f = " << (int)static_cast<unsigned char>(*f) << endl;
    f += 1;
    cout << "e = " << e << ", f = " << (int)static_cast<unsigned char>(*f) << endl;
    f += 1;
    cout << "e = " << e << ", f = " << (int)static_cast<unsigned char>(*f) << endl;

    // out of 4 bytes, it will locate an address out of int, it's unpredictable
    f += 1;
    cout << "e = " << e << ", f = " << (int)static_cast<unsigned char>(*f) << endl;

    return 0;
}

