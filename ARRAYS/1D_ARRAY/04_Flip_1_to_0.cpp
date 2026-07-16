// Problem: Flip 1 to 0
//
// Objective:
// Traverse the array and modify elements
// according to the given condition.
//
// Concepts Used:
// - Traversal
// - Conditional Statements
//
// Time Complexity: O(n)
// Space Complexity: O(1)


# include <iostream>
using namespace std;

void flip(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 0)
            arr[i] = 1;
        else
            arr[i] = 0;
    
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[6] = {1, 0, 0, 1, 1, 0};
    int size = 6;
    flip(arr, size);
    return 0;
}