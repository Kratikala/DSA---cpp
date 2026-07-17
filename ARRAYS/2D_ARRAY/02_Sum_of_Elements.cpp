// Problem: Sum of Matrix Elements
//
// Objective:
// Find the sum of all elements in a 2D array.
//
// Concepts Used:
// - Nested Loops
// - Matrix Traversal
//
// Time Complexity: O(rows × cols)
// Space Complexity: O(1)


# include <iostream>
using namespace std;

void sum (int arr[][3], int rSize, int cSize)
{
    int sum = 0;
    for(int i = 0; i < rSize; i++)
    {
        for(int j = 0; j < cSize; j++)
        {
            sum = sum + arr[i][j];
        }
    }
    cout << "Sum is : " << sum << " ";
}

int main()
{
    int arr[3][3] = {{1, 2, 3},{4, 5, 6},{7, 8, 9}};
    int rSize = 3;
    int cSize = 3;
    sum(arr, rSize, cSize);
    return 0;
}