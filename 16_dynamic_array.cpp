#include <iostream>

using namespace std;

int main()
{
    int size;
    cout << "enter a size of an array: ";
    cin >> size;

    // static
    int arr[size];

    // dynamic
    int *arrPtr = new int[size];

    for (int i = 0; i < size; i += 1)
    {
        int num;
        cin >> num;
        arrPtr[i] = num;
        arr[i] = num;
    }

    for (int i = 0; i < size; i += 1)
    {
        cout << arrPtr[i] << endl;
        cout << arr[i] << endl;
    }

    delete[] arrPtr;

    // int *newPtr = arr;
    // delete[] arr; // incorrect, static array can't not be deleted
    // delete[] newPtr; // incorrect, static array can't not be deleted

    cout << arrPtr[0] << endl; // has been deleted

    return 0;
}