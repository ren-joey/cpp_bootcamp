#include <iostream>

using namespace std;

/**
 * Encapsulation
 *
 * Abstraction
 *
 * Inheritance
 *
 * Polymorphism
 *
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
    duck(int val)
    {
        this->age = val;
    }
    ~duck() {}

    void walk() const override
    {
        cout << "Walking forward..." << endl;
    };

    void talk() const override {
        cout << "Quack!" << endl;
    };
};

int main()
{
    duck my_duck(1);
    my_duck.talk();
    cout << my_duck.get_age() << endl;
    return 0;
}