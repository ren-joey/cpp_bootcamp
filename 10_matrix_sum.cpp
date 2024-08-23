#include <iostream>

using namespace std;

int main ()
{
    int matrix1[3][3] = {
        {1, 2, 3},
        {2, 3, 5},
        {5, 6, 8}
    };
    int matrix2[3][3] = {
        {3, 5, 2},
        {4, 4, 4},
        {7, 3, 9}
    };
    int matrix3[3][3];

    for (int h = 0; h < 3; h += 1)
    {
        for (int w = 0; w < 3; w += 1)
        {
            matrix3[h][w] = matrix1[h][w] + matrix2[h][w];
        }
    }

    for (int h = 0; h < 3; h += 1)
    {
        for (int w = 0; w < 3; w += 1)
        {
            cout << matrix3[h][w] << "\t";
        }
        cout << endl;
    }

    return 0;
}
