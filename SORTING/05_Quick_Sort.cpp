/*
Topic      : Sorting
Problem    : Quick Sort
Platform   : DSA Practice

Approach   : Divide and Conquer + Partition
Pivot      : First Element
Time       : O(n log n) average, O(n^2) worst
Space      : O(log n) average recursion stack
*/


#include <iostream>
#include <vector>
using namespace std;

int partition(vector<int> &arr, int low, int high) 
{
    int pivot = arr[low];

    int i = low;
    int j = high;

    while (i < j)
    {

        while (arr[i] <= pivot && i <= high - 1) 
        {
            i++;
        }

        while (arr[j] > pivot && j >= low + 1) 
        {
            j--;
        }

        if (i < j) 
        {
            swap(arr[i], arr[j]);
        }
    }

    // Place pivot at its correct position
    swap(arr[low], arr[j]);

    return j;
}

void qs(vector<int> &arr, int low, int high) 
{

    if (low < high) 
    {

        int pindex = partition(arr, low, high);

        qs(arr, low, pindex - 1);
        qs(arr, pindex + 1, high);
    }
}

vector<int> quicksort(vector<int> arr) 
{

    qs(arr, 0, arr.size() - 1);

    return arr;
}

int main() 
{

    vector<int> arr = {3, 4, 6, 1, 4, 8, 9, 5};
    vector<int> sortedArr = quicksort(arr);

    cout << "Sorted Array: ";

    for (int x : sortedArr) {
        cout << x << " ";
    }

    cout << endl;
    return 0;
}