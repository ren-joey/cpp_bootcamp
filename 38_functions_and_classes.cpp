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
    int area(); // declare the function

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
} obj1; // global declaration

test get_input(test &temp, int a, int b)
{
    temp.set_a(a);
    temp.set_b(b);
    return temp;
}

// define the function details outside the class
int test::area()
{
    return a * b;
}

int main()
{
    get_input(obj1, 10, 20);
    cout << obj1.area() << endl;
    return 0;
}