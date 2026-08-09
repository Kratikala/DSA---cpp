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

void BubbleSort(int arr[], int n)
{
    if(n == 0)
    {
        return;
    }

    for(int i = 0; i < n - 1; i++)
    {
        if(arr[i] > arr[i+1])
        {
            swap(arr[i], arr[i+1]);
        }
    }
    BubbleSort(arr, n - 1);
}

int main()
{
    int arr[] = {5, 7, 2, 4};
    BubbleSort(arr, 4);

    for(int i = 0; i < 4; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}