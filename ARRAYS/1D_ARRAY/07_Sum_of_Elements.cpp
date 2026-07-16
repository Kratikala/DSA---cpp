// Problem: Sum of Elements
//
// Objective:
// Calculate the sum of all array elements.
//
// Concepts Used:
// - Traversal
// - Accumulator Variable
//
// Time Complexity: O(n)
// Space Complexity: O(1)


# include <iostream>
using namespace std;

void sum(int arr[], int size)
{
    int sum = 0;
    for(int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }
    cout << "Sum is :" << sum << " ";
}

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int size = 5;
    sum(arr, size);
}