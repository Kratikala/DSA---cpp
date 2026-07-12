/*
Algorithm : Insertion Sort
Time      : O(n²)
Space     : O(1)

Description:
Insertion Sort builds the sorted array
one element at a time by inserting each
element into its correct position.
*/

# include <iostream>
using namespace std;

void InsertionSort (int arr[], int n)
{
    // Picks element that needs to be inserted into the sorted array
    for (int i = 1; i < n ; i++)
    {
        int temp = arr[i];
        int j = i - 1;

        // Traverse the sorted portion from right to left 
        for (; j >= 0; j--)
        {
            // Shifts larger elements one position to the right
            if (arr[j] > temp)
            {
                arr[j+1] = arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1] = temp;
    }
}

int main()
{
    int arr[5] = {4, 11, 7, 1, 9};

    InsertionSort(arr, 5);

    for(int i = 0; i < 5; i++)
{
    cout << arr[i] << " ";
}
    return 0;
}