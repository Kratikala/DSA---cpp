// Problem: Secondary Diagonal
//
// Objective:
// Print or process the secondary diagonal
// of a matrix.
//
// Concepts Used:
// - Matrix Indexing
//
// Time Complexity: O(n)
// Space Complexity: O(1)


# include <iostream>
using namespace std;

void second_diagonal(int arr[][3], int rSize, int cSize)
{
    cout << "Secondary diagonals are : " << " ";
    for ( int i = 0; i < rSize; i++)
    {
        for (int j = 0; j < cSize; j++)
        {
            if ( i + j == 2)
            {
                cout << arr[i][j] << " ";
            }
        }
    }
}

int main()
{
    int arr[3][3] = {{1, 2, 3},{4, 5, 6},{7, 8, 9}};
    int rSize = 3;
    int cSize = 3;
    second_diagonal(arr, rSize, cSize);
    return 0;
}