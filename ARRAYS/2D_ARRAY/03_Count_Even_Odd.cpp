// Problem: Count Even & Odd Elements
//
// Objective:
// Count the number of even and odd elements
// in a 2D array.
//
// Concepts Used:
// - Nested Loops
// - Conditional Statements
//
// Time Complexity: O(rows × cols)
// Space Complexity: O(1)


# include <iostream>
using namespace std;

void even_odd ( int arr[][3], int rSize, int cSize)
{
    int count_even = 0;
    int count_odd = 0;
    for (int i = 0; i < rSize; i++)
    {
        for (int j = 0; j < cSize; j++)
        {
            if (arr[i][j] % 2 == 0)
            {
                count_even++;
            }
            else
            {
                count_odd++;
            }
        }
    }
    cout << "Even no. are : " << count_even << endl << "Odd numbers are : " << count_odd << endl;
}

int main()
{
    int arr[3][3] = {{1, 2, 3},{4, 5, 6},{7, 8, 9}};
    int rSize = 3;
    int cSize = 3;
    even_odd(arr, rSize, cSize);
    return 0;
}