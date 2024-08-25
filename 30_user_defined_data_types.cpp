#include <iostream>

using namespace std;

struct test
{
    char name[20];
    int roll_number;
    float mark;
};

// union will alway save the data to the same memory address,
// and the size of the union depends on the largest value it has ever contained
union test2
{
    char name[20];
    int roll_number;
    float mark;
};

enum days_of_week
{
    mon = 1,
    tue,
    wed,
    thu,
    fri,
    sat,
    sun
};

typedef float my_float;
typedef string my_string;

int main()
{
    cout << "======= STRUCT =======" << endl;
    // test member1 = {"Joey", 1122, 89.65};
    test member1;
    cout << "Enter the name: ";
    cin >> member1.name;
    cout << "Enter the roll number: ";
    cin >> member1.roll_number;
    cout << "Enter the mark: ";
    cin >> member1.mark;
    cin.clear();
    cin.ignore(INT_MAX, '\n');

    cout << "Name is: " << member1.name << endl;
    cout << "Roll number is: " << member1.roll_number << endl;
    cout << "Mark is: " << member1.mark << endl;

    cout << "======= UNION =======" << endl;
    /**
     * Union will always use the same memory address
     * so, once you place a new value into it
     * the previous one will be replaced
     */
    test2 member2 = {"Joey"};
    cout << member2.name << endl;
    member2.roll_number = 20;
    cout << member2.roll_number << endl;
    member2.mark = 90;
    cout << member2.name << endl;        // is replaced by mark
    cout << member2.roll_number << endl; // is replaced by mark
    cout << member2.mark << endl;

    cout << "======= ENUM =======" << endl;
    cout << "Enter the day number: ";
    days_of_week day;
    int specify_a_day;
    cin >> specify_a_day;
    day = static_cast<days_of_week>(specify_a_day);
    switch (day)
    {
    case mon:
        cout << "Today is monday" << endl;
        break;
    case tue:
        cout << "Today is tuesday" << endl;
        break;
    case wed:
        cout << "Today is wednesday" << endl;
        break;
    case thu:
        cout << "Today is thursday" << endl;
        break;
    case fri:
        cout << "Today is friday" << endl;
        break;
    case sat:
        cout << "Today is saturday" << endl;
        break;
    case sun:
        cout << "Today is sunday" << endl;
        break;
    default:
        break;
    }

    cout << "======= FLOAT_DEFINITION =======" << endl;
    my_float f = 3.99;
    my_string s = "joey";
    cout << "float value is: " << f << ", string value is: " << s << endl;

    return 0;
}