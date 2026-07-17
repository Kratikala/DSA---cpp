// Problem: Matrix Addition
//
// Objective:
// Add two matrices of the same dimensions.
//
// Concepts Used:
// - Matrix Traversal
// - Element-wise Addition
//
// Time Complexity: O(rows × cols)
// Space Complexity: O(rows × cols) (Result Matrix)


# include <iostream>
using namespace std;

void addition(int arr[][3], int arr2[][3], int rsize, int csize)
{
    cout << "Matrix Addition : " << endl;
    for (int i = 0; i < rsize; i++)
    {
        for (int j = 0; j < csize; j++)
        {
             cout << arr[i][j] + arr2[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int arr[3][3] = {{1, 2, 3},{4, 5, 6},{7, 8, 9}};
    int arr2[3][3] = {{9, 8, 7},{6, 5, 4},{3, 2, 1}};
    int rsize = 3;
    int csize = 3;
    addition(arr, arr2, rsize, csize);
    return 0;
}