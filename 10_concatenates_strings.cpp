#include <iostream>

using namespace std;

int main ()
{
    char str1[] = "Hello";
    char str2[] = "World";
    char str3[30];
    int i, j;

    /**
     *  If the loading process encounters an undefined value in a C-style character array (string),
     *  it will immediately stop at the value's index.
     */

    for (i = 0; str1[i] != '\0'; i += 1)
    {
        str3[i] = str1[i];
    }
    str3[i] = ' ';

    for (j = 0; str2[j] != '\0'; j += 1)
    {
        str3[i+1+j] = str2[j];
    }

    cout << str3 << endl;

    return 0;
}
