#include <iostream>
#include <string>

using namespace std;

class test
{
private:
    int a;
    int b;

public:
    static int c;
    void set_a(int a)
    {
        this->a = a;
    }
    void set_b(int a)
    {
        this->b = a;
    }
    int get_a()
    {
        return a;
    }
    int get_b()
    {
        return b;
    }
};
int test::c = 0; // initialize the static value by 0

int main()
{
    test t1, t2;
    t1.c = 10; // if the static value is changed from any implement object, all the other implements will be changed too
    t1.set_a(2);
    cout << t1.get_a() << endl;
    cout << t1.c << endl; // the static value was changed from t1
    cout << t2.c << endl; // the static value from t2 was also changed
    return 0;
}