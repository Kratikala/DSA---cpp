// Problem: Largest Column Sum
//
// Objective:
// Find the column having the maximum sum.
//
// Concepts Used:
// - Column Traversal
// - Comparison
//
// Time Complexity: O(rows × cols)
// Space Complexity: O(1)


# include <iostream>
using namespace std;

void largest_colsum( int arr[][3], int rSize, int cSize)
{
    int largest_colsum = 0;
    int colnumber = 0;
    for (int j = 0; j < cSize; j++)
    {
        int colsum = 0;
        for (int i = 0; i < rSize; i++)
        {
            colsum += arr[i][j];
        }
        cout << "Sum of columns " << j + 1 << " : " << colsum << endl;
        if (largest_colsum < colsum)
        {
            largest_colsum = colsum;
            colnumber = j + 1;
        }
    }
    cout << "The largest colsum is : " << largest_colsum << endl;
    cout << "Column number is : " << colnumber << endl;
}

int main()
{
    int arr[3][3] = {{1, 2, 3},{40, 50, 60},{7, 8, 9}};
    int rSize = 3;
    int cSize = 3;
    largest_colsum(arr, rSize, cSize);
    return 0;
}