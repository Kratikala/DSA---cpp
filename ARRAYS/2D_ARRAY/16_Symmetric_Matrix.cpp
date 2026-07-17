// Problem: Symmetric Matrix
//
// Objective:
// Check whether a matrix is symmetric.
//
// Concepts Used:
// - Matrix Comparison
// - Transpose
//
// Time Complexity: O(n²)
// Space Complexity: O(1)


# include <iostream>
using namespace std;

int symmetric(int arr[][3], int rSize, int cSize)
{
    bool symmetric = true;
    for (int i = 0; i< rSize; i++)
    {
        for (int j = 0; j < cSize; j++)
        {
            if (arr[i][j] != arr[j][i])
            {
                symmetric = false;
            } 
        }
    }
    if (symmetric)
    {
        cout << "SYMMETRIC" << endl;
    }
    else
    {
        cout << "NOT SYMMETRIC" << endl;
    }
}

int main()
{
    int arr[3][3] = {{1, 2, 3},{4, 5, 6},{7, 8, 9}};
    int rSize = 3;
    int cSize = 3;
    symmetric(arr, rSize, cSize);
    return 0;
}