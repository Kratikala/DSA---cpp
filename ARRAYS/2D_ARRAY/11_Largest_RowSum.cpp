// Problem: Largest Row Sum
//
// Objective:
// Find the row having the maximum sum.
//
// Concepts Used:
// - Row Traversal
// - Comparison
//
// Time Complexity: O(rows × cols)
// Space Complexity: O(1)


# include <iostream>
using namespace std;

void largest_rowsum(int arr[][3], int rSize, int cSize)
{
    int largest_rowsum = 0;
    int rownumber = 0;
    for (int i = 0; i < rSize; i++)
    {
        int rowsum = 0;
        for(int j = 0; j < cSize; j++)
        {
            rowsum += arr[i][j]; 
        }
        cout << "Sum of row " << i + 1 << " : " << rowsum << endl;
        if ( largest_rowsum < rowsum)
        {
            largest_rowsum = rowsum;
            rownumber = i + 1;
        }
    }
    cout << "The largest rowsum is " << largest_rowsum << endl;
    cout << "Row number is " << rownumber << endl;
}

int main()
{
    int arr[3][3] = {{1, 2, 3},{40, 50, 60},{7, 8, 9}};
    int rSize = 3;
    int cSize = 3;
    largest_rowsum(arr, rSize, cSize);
    return 0;
}