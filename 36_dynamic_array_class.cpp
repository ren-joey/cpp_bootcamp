#include <iostream>
#include <string>

using namespace std;

class dynamic_array
{
private:
    string name;
    int size;
    int *marks;

public:
    // delegating constructor (C++11 and above)
    dynamic_array() : dynamic_array(3) {}
    dynamic_array(int val) : size(val)
    {
        marks = new int[size];
    }
    ~dynamic_array()
    {
        delete[] marks;
    }
    void set_name()
    {
        string val;
        cout << "Enter the student name: " << endl;
        cin >> val;
        name = val;
    }

    void marks_input()
    {
        cout << "Enter the subject marks: " << endl;
        cout << "size is: " << size << endl;
        for (int i = 0; i < size; i += 1)
        {
            cout << "subject #" << i + 1 << ": ";
            cin >> marks[i];
        }
    }

    void print()
    {
        cout << "Student name: " << name << endl;
        for (int i = 0; i < size; i += 1)
        {
            cout << "subject #" << i + 1 << ": ";
            cout << marks[i] << endl;
        }
    }
};

int main()
{
    cout << "Enter the size of array class: ";
    int size;
    cin >> size;

    // ===== Static Memory Allocation =====
    // dynamic_array arr[size];
    // for (dynamic_array &item: arr)
    // {
    //     item.set_name();
    //     item.marks_input();
    // }
    // for (dynamic_array &item: arr)
    // {
    //     item.print();
    // }

    // ===== Dynamic Memory Allocation =====
    dynamic_array *arr = new dynamic_array[size];
    for (int i = 0; i < size; i += 1)
    {
        arr[i].set_name();
        arr[i].marks_input();
    }
    for (int i = 0; i < size; i += 1)
    {
        arr[i].print();
    }
    delete[] arr;

    return 0;
}