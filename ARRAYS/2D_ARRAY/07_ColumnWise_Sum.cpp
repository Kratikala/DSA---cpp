// Problem: Column-wise Sum
//
// Objective:
// Calculate the sum of every column in a matrix.
//
// Concepts Used:
// - Nested Loops
// - Column Traversal
//
// Time Complexity: O(rows × cols)
// Space Complexity: O(1)


# include <iostream>
using namespace std;

void col_sum( int arr[][3], int rSize, int cSize)
{
    for ( int j = 0; j < cSize; j++)
    {
        int colsum = 0;
        for ( int i = 0; i < rSize; i++)
        {
            colsum += arr[i][j];       
        }
        cout << "Sum of column " << j + 1 << " : " << colsum << endl;
    } 
}

int main()
{
    int arr[3][3] = {{1, 2, 3},{4, 5, 6},{7, 8, 9}};
    int rSize = 3;
    int cSize = 3;
    col_sum(arr, rSize, cSize);
    return 0;
}