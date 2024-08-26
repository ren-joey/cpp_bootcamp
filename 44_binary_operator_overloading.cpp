#include <iostream>

using namespace std;

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

    duck& operator +(int val)
    {
        cout << "+ operator for numbers has been called";
        age += val;
        return *this;
    };

    /**
     * "const" specifier indicates that this variable will not be altered
     * it is a good practice especially when the argument is using call-by-reference
     * it is memory efficiency
     */
    duck& operator +(const duck& d)
    {
        cout << "+ operator for classes has been called";
        age += d.age;
        return *this;
    };

    /**
     * "friend" specifier can grand a non-member function to access the private or
     * protected variables of this class. Since the function is declared as a friend
     * function, it is not a member of this class.
     */
    friend duck& operator +(int r, duck& d)
    {
        cout << "friend + operator for classes has been called";
        d.age += r;
        return d;
    };

    // ++operator
    duck& operator ++()
    {
        cout << "++operator has been called";
        age += 1;
        return *this;
    };

    // operator++
    duck& operator ++(int)
    {
        cout << "operator++ has been called";
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

    ++my_duck;
    my_duck.display();
    
    my_duck++;
    my_duck.display();
    
    my_duck = my_duck + 5;
    my_duck.display();

    my_duck = 8 + my_duck;
    my_duck.display();
    
    my_duck = my_duck + my_duck;
    my_duck.display();
    
    return 0;
}