#include <iostream>
#include <string>

using namespace std;

class member
{
    /**
     * member variables
     * =======================================================
     * access specifiers:
     *      private - can not be access outside of the class
     *      public - can be access anywhere
     *      protected - can be access in derived classes
     * =======================================================
     */

    // public access
public:
    string name;
    int age;
    char phone[10];

    void request_inputs()
    {
        cout << "Enter the member name: ";
        cin >> name;
        cout << "Enter the age of the member: ";
        cin >> age;
        cout << "Enter the phone of the member: ";
        cin >> phone;
    }

    void print()
    {
        cout << "Member name: " << name << ", age: " << age << ", phone: " << phone << endl;
    }

    void get_static_number()
    {
        cout << "The private static number is: " << static_number << endl;
    }

private:
    int static_number = 10;

protected:
    int protected_static_number = 20;
};

int main()
{
    member member1;
    member1.get_static_number();
    member1.request_inputs();
    member1.print();

    return 0;
}