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

void multiply(int)

int main()
{
    // in C++ array, arr[] == &arr
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(int);

    print(arr, size);

    return 0;
}