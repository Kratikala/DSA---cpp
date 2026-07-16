// Problem: Second Largest Element
//
// Objective:
// Find the second largest element in the array.
//
// Concepts Used:
// - Traversal
// - Comparison
// - Maintaining Multiple Variables
//
// Time Complexity: O(n)
// Space Complexity: O(1)


# include <iostream>
using namespace std;

int second_largest(int arr[], int size)
{
    int largest = arr[0];
    int secondlargest = arr[1];
    for (int i = 0; i < size; i++)
    {
        if ( arr[i] > largest)
        {
            secondlargest = largest;
            largest = arr[i];
        }
        else if (arr[i] > secondlargest)
        {
            secondlargest = arr[i];
        }
    }
    cout << secondlargest << endl;
}  

int main()
{
    int arr[5] = {10, 5, 60, 50, 55};
    int size = 5;
    second_largest(arr, size);
    return 0;
}