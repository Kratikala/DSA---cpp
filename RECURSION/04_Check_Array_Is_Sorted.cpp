/*
Topic: Recursion / Arrays
Problem: Check whether an array is sorted in non-decreasing order.
Platform: Practice

Approach: Recursively check adjacent elements.
Time Complexity: O(n)
Auxiliary Space: O(n) with recursion.
*/

# include <iostream>
using namespace std;

bool isSorted(int arr[], int n, int i)
{
    if(i == n - 1)
    {
        return true;
    }

    if(arr[i] > arr[i + 1])
    {
        return false;
    }

    return isSorted(arr, n, i + 1);
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 1};

    int n = sizeof(arr) / sizeof(arr[0]);

    if(isSorted(arr, n, 0))
    {
        cout << "Array is Sorted";
    }
    else
    {
        cout << "Array is not Sorted";
    }
    return 0;
}