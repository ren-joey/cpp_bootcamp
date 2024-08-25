#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char chr = 'a';
    char str[] = {'a', 'b', 'c', 'd', 'e', '\0'};
    char str2[] = "abcde";
    string a = "abcde";

    cout << chr << endl;
    cout << str << endl;
    cout << sizeof(str) << endl;
    cout << str2 << endl;
    cout << sizeof(str2) << endl;
    cout << a << endl;
    cout << sizeof(a) << endl;

    /**
     * if user inputs containing any space character (" ")
     * variable b will only receive the first part before the first space character
     */
    string b;

    cout << "Enter a string containing space character (\" \"):" << endl;
    cin >> b;
    cin.clear();
    cin.ignore(INT_MAX, '\n');
    cout << "The program will only receive the first part before the first space character presents:" << endl;
    cout << b << endl;

    cout << "Enter a string containing space character (\" \"):" << endl;
    getline(cin, b);
    cout << "Using getline function will successfully receive the full string:" << endl;
    cout << b << endl;

    return 0;
}