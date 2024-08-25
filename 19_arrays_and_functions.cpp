#include <iostream>

using namespace std;

void print(int arr[], int size)
{
    cout << "The array size is: " << size << endl;
    for (int i = 0; i < size; i += 1)
    {
        cout << arr[i] << endl;
    }

}

void multiply(int arr[], int size)
{
    for (int i = 0; i < size; i += 1)
    {
        arr[i] *= 3;
    }

}

int main()
{
    // in C++ array, arr[] == &arr
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(int);

    cout << "Before multiply: " << endl;
    print(arr, size);

    multiply(arr, size);
    cout << "After multiply: " << endl;
    print(arr, size);

    return 0;
}