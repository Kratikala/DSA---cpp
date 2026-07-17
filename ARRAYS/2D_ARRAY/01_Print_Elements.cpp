// Problem: Print Matrix Elements
//
// Objective:
// Traverse and print all elements of a 2D array.
//
// Concepts Used:
// - Nested Loops
// - Matrix Traversal
//
// Time Complexity: O(rows × cols)
// Space Complexity: O(1)


# include <iostream>
using namespace std;

void PrintArray(int arr[][3], int rowSize, int colSize)
{
    for (int row_index = 0; row_index < rowSize; row_index++)
    {
        for (int col_index = 0; col_index < colSize; col_index++)
        {
            cout << arr[row_index][col_index] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int arr[3][3] = {{1, 2, 3},{4, 5, 6},{7, 8, 9}};
    int rowSize = 3;
    int colSize = 3;
    PrintArray(arr, rowSize, colSize);
    return 0;
}