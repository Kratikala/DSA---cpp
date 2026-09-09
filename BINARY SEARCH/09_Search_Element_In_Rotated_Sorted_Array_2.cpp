/*
Topic      : Binary Search
Problem    : Search in Rotated Sorted Array II
Platform   : LeetCode 81

Approach   : Modified Binary Search with Duplicate Handling
Time       : O(log n) average, O(n) worst case
Space      : O(1)
*/

# include <iostream>
# include <vector>
using namespace std;

bool search(vector <int> arr, int k)
{
    int low = 0;
    int high = arr.size() - 1;

    while(low <= high)
    {
        int mid = low + (high - low) / 2;

        if(arr[mid] == k)
        {
            return true;
        }

        if(arr[low] == arr[mid] && arr[mid] == arr[high])
        {
            low++;
            high--;
            continue;
        }

        if(arr[low] <= arr[mid])
        {
            if(arr[low] <= k && k < arr[mid])
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }

        else
        {
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
    return false;
}

int main()
{
    vector <int> arr = {7, 8, 1, 2, 3, 3, 3, 4, 5, 6};

    int k;
    cout << "Enter value : ";
    cin >> k;

    cout << boolalpha << search(arr, k);

    return 0;
}