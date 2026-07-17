// Problem: Smallest Element in Matrix
//
// Objective:
// Find the minimum element in a 2D array.
//
// Concepts Used:
// - Matrix Traversal
// - Comparison
//
// Time Complexity: O(rows × cols)
// Space Complexity: O(1)


# include <iostream>
using namespace std;

void smallest(int arr[][3], int rSize, int cSize)
{
    int smallest = arr[0][0];
    for (int i = 0; i < rSize; i++)
    {
        for ( int j = 0; j < cSize; j++)
        {
            if (arr[i][j] < smallest)
            {
                smallest = arr[i][j];
            } 
        }
    }
    cout << "Smallest is : " << smallest << " ";
}

int main()
{
    int arr[3][3] = {{1, 20, 3},{4, 15, 6},{0, 8, 9}};
    int rSize = 3;
    int cSize = 3;
    smallest(arr, rSize, cSize);
    return 0;
}