/*
Topic: Recursion / Arrays
Problem: Reverse the elements of an array.
Platform: Practice

Approach: Recursively swap elements at the beginning and end, then move inward until the pointers meet or cross.
Time Complexity: O(n)
Auxiliary Space: O(n) with recursion.
*/

# include <iostream>
using namespace std;

void Reverse(int arr[], int start, int end)
{
    if(start >= end)
    {
        return;
    }

    swap(arr[start], arr[end]);
    Reverse(arr, start + 1, end - 1);
}

void Print(int arr[], int n)
{
    for( int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};

    int n = sizeof(arr) / sizeof(arr[0]);

    Reverse(arr, 0, n - 1);
    Print(arr, n);

    return 0;
}