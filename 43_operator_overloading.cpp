#include <iostream>

using namespace std;

/**
 * Operator Overloading
 * -----------------------------------------------
 * 1. Unity operators: i++, i--
 * 2. Binary operators: a + b, 10 + a (+, -, *, /)
 * 
 * Operators Can Not Be Overloaded
 * -----------------------------------------------
 * 3. Ternary operator: condition ? a : b
 * 4. Other operators: ::, .
 */

class creature
{
protected:
    int age;

public:
    void set_age(int val)
    {
        age = val;
    };
    int get_age()
    {
        return age;
    };
    // const = 0 specifier means this function will not modify any object member variables
    virtual void walk() const = 0;
    virtual void talk() const = 0;
    virtual ~creature() {};
};

class duck : public creature
{
public:
    duck(int age)
    {
        this->age = age;
    }
    ~duck() {}

    void walk() const override
    {
        cout << "Walking forward..." << endl;
    };

    void talk() const override {
        cout << "Quack!" << endl;
    };

    // ++operator
    duck& operator ++()
    {
        age += 1;
        return *this;
    };

    // operator++ or operator+N
    duck& operator ++(int val)
    {
        age += 1;
        return *this;
    };

    void display()
    {
        cout << "The age is: " << age << endl;
    };
};

int main()
{
    duck my_duck(1);
    my_duck.talk();
    my_duck.display();
    my_duck++;
    my_duck.display();
    return 0;
}