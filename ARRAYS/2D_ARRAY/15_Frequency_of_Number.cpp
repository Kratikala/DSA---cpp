// Problem: Frequency of Number
//
// Objective:
// Count the occurrence of a given element
// in a matrix.
//
// Concepts Used:
// - Matrix Traversal
// - Frequency Counting
//
// Time Complexity: O(rows × cols)
// Space Complexity: O(1)


# include <iostream>
using namespace std;

int frequency(int arr[][3], int rSize, int cSize, int target)
{
    int count = 0;
    for (int i = 0; i < rSize; i++)
    {
        for (int j = 0; j < cSize; j++)
        {
            if (arr[i][j] == target)
            {
                count++;
            }
        }
    }
    cout << "Frequency : " << count << " ";
}

int main()
{
    int arr[3][3] = {{1, 2, 3},{4, 2, 6},{7, 8, 2}};
    int target;
    cout << "Enter the target value : " << " ";
    cin >> target;
    int rSize = 3;
    int cSize = 3;
    frequency(arr, rSize, cSize, target);
    return 0;
}