#include <iostream>

using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5};    // if the right side didn't initialize the array,
                                    // you should mention the size of the array at first (ex. int att[5])
    int *ptr = NULL, *ptr1 = NULL, *ptr2 = NULL;
    int sum = 0;
    ptr = arr; // will be pointing at the first element of an array
    ptr1 = &arr[0];
    ptr2 = &arr[1];

    cout << ptr << endl;
    cout << ptr1 << endl;
    cout << ptr2 << endl;

    cout << "sizeof(arr): " << sizeof(arr) << ", sizeof(int): " << sizeof(int) << endl;
    for (int i = 0; i < sizeof(arr)/sizeof(int); i += 1)
    {
        sum += *(ptr + i);
        cout << "address: " << ptr + i << endl;
        cout << "value: " << *(ptr + i) << endl;
    }
    cout << "total: " << sum << endl;

    return 0;
}