// Problem: Row-wise Sum
//
// Objective:
// Calculate the sum of every row in a matrix.
//
// Concepts Used:
// - Nested Loops
// - Row Traversal
//
// Time Complexity: O(rows × cols)
// Space Complexity: O(1)


# include <iostream>
using namespace std;

void row_sum(int arr[][3], int rSize, int cSize)
{
    for( int i = 0; i < rSize; i++)
    {
        int rowsum = 0; // reset for each row
        for( int j = 0; j < cSize; j++)
        {  
            rowsum = rowsum + arr[i][j];        
        }
        cout << "Sum of row " << i + 1 << " : " << rowsum << endl;
    }
}

int main()
{
    int arr[3][3] = {{1, 2, 3},{4, 5, 6},{7, 8, 9}};
    int rSize = 3;
    int cSize = 3;
    row_sum(arr, rSize, cSize);
    return 0;
}