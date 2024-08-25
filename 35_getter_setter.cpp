#include <iostream>
#include <string>

using namespace std;

class member
{
private:
    int a;
    int b;

public:
    int get_a()
    {
        return a;
    }
    int get_b()
    {
        return b;
    }
    void set_a(int val)
    {
        a = val;
    }
    void set_b(int val)
    {
        b = val;
    }
};

int main()
{
    member member1;
    member1.set_a(10);
    cout << member1.get_a() << endl;

    return 0;
}