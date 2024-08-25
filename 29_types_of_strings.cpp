#include <iostream>
#include <cctype>
#include <algorithm>
#include <string.h>

using namespace std;

char *strrev(char *s)
{
    if (s && *s) {
        char *b = s, *e = s + strlen(s) - 1;
        while (b < e) {
            char t = *b;
            *b++ = *e;
            *e-- = t;
        }
    }
    return s;
}

int main()
{
    char name[] = "Joey Ren";
    char name2[] = "Hello world";
    // cin.get(name, 20); // working properly with space characters
    cout << name << endl;
    strrev(name);
    cout << name << endl;
    strrev(name);
    strcat(name, name2);
    cout << name << endl;

    string name3;
    string name4;
    cout << "Enter name3: ";
    getline(cin, name3);
    cout << "Enter name4: ";
    getline(cin, name4);
    cout << name3 << endl;
    cout << name4 << endl;
    cout << name3 + " " + name4 << endl;
    // this will show the size of string class, which is 4 constantly
    cout << name3.length() << endl;
    // this will show ths memory size allocated for the string class
    cout << name3.capacity() << endl;
    // if the string is extended, the capacity of the string will also be extended
    name3.append(" test this function.");
    cout << name3 << endl;
    cout << name3.capacity() << endl;
    reverse(name3.begin(), name3.end());
    cout << name3 << endl;
    reverse(name3.begin(), name3.end());
    string only_numbers;

    for (char c: name3) // equal to for loop from each char in the string
    {
        if(isdigit(c) == true)
        {
            only_numbers += c;
        }
    }
    cout << "Only numbers in the string are: " << only_numbers << endl;

    return 0;
}