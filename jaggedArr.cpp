#include<iostream>
using namespace std;

int main()
{
    //using 2d dynamic arr
    int row, col;
    row = 3;

    int** arr = new int*[row];
    int sizes[] = { 4, 2, 3 };

    for (int i = 0; i < row; i++)
    {
        arr[i] = new int[sizes[i]];
    }

    int num = 1;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < sizes[i]; j++) {
            arr[i][j] = num++;
        }
    }

    cout << "elements in matrix form as follow" << endl;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < sizes[i]; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }






    // //using static arr of pointers
    // int row1[] = { 1, 2, 3, 4 };
    // int row2[] = { 5, 6 };
    // int row3[] = { 7, 8, 9 };

    // int* jagged[] = { row1, row2, row3 };

    // int sizes[] = { 4, 2, 3 };

    // for (int i = 0; i < 3; i++)
    // {
    //     int* ptr = jagged[i];
    //     for (int j = 0; j < sizes[i]; j++)
    //     {
    //         cout << *(ptr + j) << " ";
    //     }
    //     cout << endl;
    // }

    return 0;
}