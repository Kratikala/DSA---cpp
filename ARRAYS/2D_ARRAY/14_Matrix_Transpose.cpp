// Problem: Matrix Transpose
//
// Objective:
// Find the transpose of a matrix.
//
// Concepts Used:
// - Matrix Manipulation
// - Swapping
//
// Time Complexity: O(rows × cols)
// Space Complexity: O(1)


# include <iostream>
using namespace std;

int transpose (int arr[][3], int rSize, int cSize)
{
    cout << "Original Matrix : " << endl;
    for (int i = 0; i < rSize; i++)
    {
        for (int j = 0; j < cSize; j++)
        {
             cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Transpose Matrix : " << endl;
    for (int i = 0; i < rSize; i++)
    {
        for (int j = 0; j < cSize; j++)
        {
             cout << arr[j][i] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int arr[3][3] = {{1, 2, 3},{4, 5, 6},{7, 8, 9}};
    int rSize = 3;
    int cSize = 3;
    transpose(arr, rSize, cSize);
    return 0;
}
