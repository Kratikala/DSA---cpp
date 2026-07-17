// Problem: Boundary Traversal
//
// Objective:
// Print the boundary elements of a matrix.
//
// Concepts Used:
// - Matrix Traversal
// - Boundary Conditions
//
// Time Complexity: O(rows × cols)
// Space Complexity: O(1)


# include <iostream>
using namespace std;

int boundary(int arr[][4], int rsize, int csize)
{
    int top = 0;
    int bottom = rsize - 1;
    int left = 0;
    int right = csize - 1;

    // Top row

    for (int i = left; i <= right ; i++)
    {
        cout << arr[top][i];
    }

    // Right Column

    for (int j = top + 1; j <= bottom; j++)
    {
        cout << arr[j][right] << " ";
    }

    // Bottom Row

    for (int i = right - 1; i >= left; i--)
    {
        cout << arr[bottom][i] << " ";
    }

    // Left Column

    for (int j = bottom - 1; j > top; j--)
    {
        cout << arr[j][left] << " ";
    }
}

int main()
{
    int arr[4][4] ={{1, 2, 3, 4},{5, 6, 7, 8},{9, 10, 11, 12},{13, 14, 15, 16}};
    boundary(arr, 4, 4);
    return 0;
}