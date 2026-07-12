/*
Algorithm : Bubble Sort
Time      : O(n²)
Space     : O(1)

Description:
Bubble Sort repeatedly compares adjacent
elements and swaps them if they are in
the wrong order.
*/


# include <iostream>
using namespace std;

void BubbleSort (int arr[], int n)
{
    // Switching the number of passes
    for (int i = 0; i < n-1; i++)
    {
        bool swapped = false;
        
        // Traversing the number of elements in the array
        for (int j = 0; j < n-1-i; j++)
        {
            if(arr[j] > arr[j+1])
            {
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }

        // If no swap occurs, the array is already sorted
        if (!swapped)
        {
            break;
        }
    }
}

int main()
{
    int arr[5] = {8, 5, 7, 3, 2};

    BubbleSort(arr, 5);

    for(int i = 0; i < 5; i++)
{
    cout << arr[i] << " ";
}
    return 0;
}