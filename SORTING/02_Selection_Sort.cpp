/*
Algorithm : Selection Sort
Time      : O(n²)
Space     : O(1)

Description:
Selection Sort repeatedly selects the
minimum element from the unsorted portion
and places it at the correct position.
*/


#include <iostream>
using namespace std;

void SelectionSort(int arr[], int n)
{
    // Select the position
    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;

        // Traverse the remaining unsorted array
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }

        // Place the smallest elelemt at its correct position
        swap(arr[i], arr[minIndex]);
    }
}

int main()
{
    int arr[5] = {64, 25, 12, 22, 11};

    SelectionSort(arr, 5);

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}