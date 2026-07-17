// Problem: Spiral Traversal
//
// Objective:
// Traverse a matrix in spiral order.
//
// Concepts Used:
// - Boundary Traversal
// - Matrix Traversal
//
// Time Complexity: O(rows × cols)
// Space Complexity: O(1)


# include <iostream>
using namespace std;

void spiral(int arr[][3], int rSize, int cSize)
{
    int top = 0;
    int bottom = rSize - 1;
    int left = 0;
    int right = cSize - 1;

    while(top <= bottom && left <= right)
    {
        // Top Row
        for(int j = left; j <= right; j++)
        {
            cout << arr[top][j] << " ";
        }
        top++;

        // Right Column
        for(int i = top; i <= bottom; i++)
        {
            cout << arr[i][right] << " ";
        }
        right--;

        // Bottom Row
        if(top <= bottom)
        {
            for(int j = right; j >= left; j--)
            {
                cout << arr[bottom][j] << " ";
            }
            bottom--;
        }

        // Left Column
        if(left <= right)
        {
            for(int i = bottom; i >= top; i--)
            {
                cout << arr[i][left] << " ";
            }
            left++;
        }
    }
}

int main()
{
    int arr[3][3] ={{1, 2, 3},{4, 5, 6},{7, 8, 9}};
    spiral(arr, 3, 3);
    return 0;
}