// Problem: Matrix Multiplication
//
// Objective:
// Multiply two compatible matrices.
//
// Concepts Used:
// - Nested Loops
// - Matrix Multiplication
//
// Time Complexity: O(n³)
// Space Complexity: O(rows × cols) (Result Matrix)


# include <iostream>
using namespace std;

void multiplication(int arr[][2], int arr2[][2], int rsize, int csize)
{
    for (int i = 0; i < rsize; i++)
    {
        for (int j = 0; j < csize; j++)
        {
            int result = 0;
            for (int k = 0; k < csize; k++)
            {
                result += arr[i][k] * arr2[k][j];
            }
            cout << result << " ";
        }
        cout << endl;
    }
}

int main()
{
    int arr[2][2] = {{1, 2},{3, 4}};
    int arr2[2][2] = {{5, 6},{7, 8}};
    int rsize = 2;
    int csize = 2;
    multiplication(arr, arr2, rsize, csize);
    return 0;
}