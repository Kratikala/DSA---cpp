/*
Topic      : Sorting
Problem    : Merge Sort

Approach   : Divide and Conquer

Intuition:
- Divide the array into two halves recursively.
- Keep dividing until each part contains one element.
- Merge the sorted halves by comparing their elements.
- Copy the sorted elements back into the original array.

Time Complexity : O(n log n)
Space Complexity: O(n)
*/


# include <iostream>
# include <vector>
using namespace std;

// ---------------- Merge Function ----------------

void merge(vector<int> &arr, int low, int mid, int high)
{
    vector <int> temp;

    int left = low;
    int right = mid + 1;

    while(left <= mid && right <= high)
    {
        if(arr[left] <= arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }
        else
        {
            temp.push_back(arr[right]);
            right++;
        }
    }

    while(left <= mid)
    {
        temp.push_back(arr[left]);
        left++;
    }

    while(right <= high)
    {
        temp.push_back(arr[right]);
        right++;
    }

    for(int i = low; i <= high; i++)
    {
        arr[i] = temp[i - low];
    }
}

// -------------- Divide Recursive Function -----------------

void mS(vector<int> &arr, int low, int high)
{
    if(low == high)
    {
        return;
    }

    int mid = (low + high) / 2;

    mS(arr, low, mid);
    mS(arr, mid + 1, high);
    merge(arr, low, mid, high);
}

void mergeSort(vector<int> &arr, int n)
{
    mS(arr, 0, n - 1);

}

int main()
{
    vector <int> arr = {3, 1, 2, 4, 1, 5, 2, 6, 4};

    int n = arr.size();

    mergeSort(arr, n);

    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}

