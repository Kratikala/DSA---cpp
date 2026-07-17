// Problem: Largest Element in Matrix
//
// Objective:
// Find the maximum element in a 2D array.
//
// Concepts Used:
// - Matrix Traversal
// - Comparison
//
// Time Complexity: O(rows × cols)
// Space Complexity: O(1)


# include <iostream>
using namespace std;

void largest (int arr[][3], int rSize, int cSize)
{
    int largest = arr[0][0];
    for( int i = 0; i < rSize; i++)
    {
        for (int j = 0; j < cSize; j++)
        {
            if (arr[i][j] > largest)
            {
                largest = arr[i][j];
            }
        }
    }
    cout << "Largest element is : " << largest << " ";
}

int main()
{
    int arr[3][3] = {{1, 2, 3},{4, 20, 6},{7, 19, 9}};
    int rSize = 3;
    int cSize = 3;
    largest(arr, rSize, cSize);
    return 0;
}