#include <iostream>
#include <string>

using namespace std;

class member
{
private:
    int a;
    int b;

public:
    string name;
    int age;
    char phone[10];

    // Constructor is a public function whose name is the same as the class name
    // member() {
    //     cout << "Constructor is running..." << endl;
    //     name = "unknown";
    //     age = NAN;
    //     strcpy(phone, "unknown");
    // }
    // the same as the above constructor expression
    member() : name("unknown"), age(NAN)
    {
        strcpy(phone, "unknown");
    }
    member(int input_a, int input_b)
    {
        member();
        assign_private_numbers(input_a, input_b);
    }

    void print()
    {
        cout << "Member name: " << name << ", age: " << age << ", phone: " << phone << endl;
    }

    void assign_private_numbers(int input_a, int input_b)
    {
        a = input_a;
        b = input_b;
    }

    void print_private_numbers()
    {
        cout << "Private a is: " << a << ", private b is: " << b << endl;
    }

    ~member()
    {
        cout << "Destructor is running..." << endl;
    }
};

int main()
{
    member member1;
    member1.assign_private_numbers(20, 30);
    member1.print_private_numbers();
    member1.print();

    return 0;
}