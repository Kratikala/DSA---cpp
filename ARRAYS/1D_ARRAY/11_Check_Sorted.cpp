// Problem: Check if Array is Sorted
//
// Objective:
// Determine whether the array is sorted
// in ascending order.
//
// Concepts Used:
// - Traversal
// - Adjacent Element Comparison
//
// Time Complexity: O(n)
// Space Complexity: O(1)


# include <iostream>
using namespace std;

void sort(int arr[], int size)
{
    bool isSorted = true;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > arr[i+1])
        {
            isSorted = false;
            break;
        } 
    }
    if (isSorted)
    {
        cout << "Array is sorted" << endl;
    }
    else
    {
        cout << "Array is not sorted" << endl;
    }
}

int main()
{
    int arr[5] = {1, 3, 2, 4, 5};
    int size = 5;
    sort(arr, size);
    return 0;
}