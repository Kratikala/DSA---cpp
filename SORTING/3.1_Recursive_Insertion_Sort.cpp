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

void InsertionSort(int arr[], int size)
{
    if(size <= 1)
    {
        return;
    }

    InsertionSort(arr, size - 1);

    int temp = arr[size - 1];
    int j = size - 2;

    while(j >= 0 && arr[j] > temp)
    {
        arr[j + 1] = arr[j];
        j--;
    }
    arr[j + 1] = temp;
}

int main()
{
    int arr[] = {10, 1, 7, 4, 8, 2, 11};
    InsertionSort(arr, 7);

    for(int i = 0; i < 7; i++)
    {
        cout << arr[i] << " " ;
    }
    return 0;
}