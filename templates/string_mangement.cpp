#include <iostream>
#include <cctype>
#include <algorithm>
#include <string.h>

using namespace std;

char *strrev(char *s)
{
    if (s && *s)
    {
        char *b = s, *e = s + strlen(s) - 1;
        while (b < e)
        {
            char t = *b;
            *b++ = *e;
            *e-- = t;
        }
    }
    return s;
}

int main()
{
    return 0;
}