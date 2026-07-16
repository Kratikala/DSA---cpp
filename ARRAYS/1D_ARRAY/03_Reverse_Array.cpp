// Problem: Reverse Array
//
// Objective:
// Reverse the elements of an array using the
// two-pointer technique.
//
// Concepts Used:
// - Two Pointers
// - Swapping
// - Traversal
//
// Time Complexity: O(n)
// Space Complexity: O(1)


# include <iostream>
using namespace std;

void reverse(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int size = 5;
    reverse(arr, size);
    for (int i = 0; i < size - 1; i++){
        cout << arr[i] << " ";
    }
    return 0;
}