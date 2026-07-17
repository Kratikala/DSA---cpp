// Problem: Identity Matrix
//
// Objective:
// Check whether a matrix is an identity matrix.
//
// Concepts Used:
// - Matrix Traversal
// - Conditional Checking
//
// Time Complexity: O(n²)
// Space Complexity: O(1)


# include <iostream>
using namespace std;

void identity (int arr[][3], int rSize, int cSize)
{
    bool identity = true;
    for (int i = 0; i < rSize; i++)
    {
        for (int j = 0; j < cSize; j++)
        {
            if (i == j && arr[i][j] != 1)
            {
                identity = false;
            } 
            if (i != j && arr[i][j] != 0)
            {
                identity = false;
            }
        }
    }
    if (identity)
    {
        cout << "It is identity matrix" << endl;
    }
        else
        {
            cout << "It is not identity matrix" << endl;
        }
}

int main()
{
    int arr[3][3] = {{1, 0, 0},{0, 1, 0},{0, 0, 1}};
    int rSize = 3;
    int cSize = 3;
    identity(arr, rSize, cSize);
    return 0;
}