// Problem: Frequency of Number
//
// Objective:
// Count the occurrence of element
// in the array.
//
// Concepts Used:
// - Loops / Frequency Counting
// - Traversal
//
// Time Complexity: O(n)
// Space Complexity: O(1)


# include <iostream>
using namespace std;

void frequency(int arr[], int size, int value)
{
    int count = 0;
    for ( int i = 0; i < size; i++)
    {
        if (arr[i] == value)
        {
        count++;
        }
    }
    cout << "Frequency is : " << count << endl;
}

int main()
{
    int arr[6] = {1, 1, 3, 5, 6, 1};
    int size = 6;
    int value;
    cout << "Enter number to find frequency: ";
    cin >> value;
    frequency(arr, size, value);
    return 0;
}
