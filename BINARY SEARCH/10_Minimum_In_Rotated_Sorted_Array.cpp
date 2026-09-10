/*
Topic      : Binary Search
Problem    : Minimum in Rotated Sorted Array
Platform   : LeetCode 153

Approach   : Binary Search
Time       : O(log n)
Space      : O(1)
*/

# include <iostream>
# include <vector>
using namespace std;

int minimum(vector <int> arr)
{
    int low = 0;
    int high = arr.size() - 1;

    while(low < high)
    {
        int mid = low + (high - low) / 2;

        if(arr[mid] > arr[high])
        {
            low = mid + 1;
        }
        else
        {
            high = mid;
        }
    }
    return arr[low];
}

int main()
{
    vector <int> arr = {3, 4, 5, 1, 2};

    int result = minimum(arr);
    cout << "Minimum value is : " << result << " ";

    return 0;
}