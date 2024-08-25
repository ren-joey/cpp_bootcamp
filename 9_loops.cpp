#include <iostream>

using namespace std;

int main()
{
    for (int i = 0; i < 10; i+=1)
    {
        cout << i << endl;
    }

    int d = 100;
    while (d > 90)
    {
        cout << d << endl;
        d-=1;
    }

    do {
        cout << d << endl;
        d-=1;
    } while (d > 90);

    return 0;
}
