/*
Topic      : Binary Search
Problem    : Search Element in a Rotated Sorted Array
Platform   : LeetCode 33 / Practice
Approach   : Modified Binary Search
Time       : O(log n)
Space      : O(1)
*/

# include <iostream>
# include <vector>
using namespace std;

int search(vector<int> arr, int k)
{
    int low = 0;
    int high = arr.size() - 1;

    while(low <= high)
    {
        int mid = low + (high - low) / 2;

        if(arr[mid] == k)
        {
            return mid;
        }

        // Left half is sorted
        if(arr[low] <= arr[mid])
        {

            // Target lies in sorted left half
            if(arr[low] <= k && k < arr[mid])
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }

        // Right half is sorted
        else
        {
            // Target lies in sorted right half
            if(arr[mid] < k && k <= arr[high])
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
    }

    return -1;
}

int main()
{
    vector <int> arr = {4, 6, 5, 0, 1, 2, 3};

    int k;
    cout << "Enter value to find : ";
    cin >> k;

    int result = search(arr, k);
    cout << "Target index is : " << result << " ";

    return 0;
}

