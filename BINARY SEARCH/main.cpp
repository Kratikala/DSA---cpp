/*
Topic      : Binary Search
Problem    : Binary Search
Platform   : LeetCode 704

Time       : O(logn)
Space      : O(1)
*/

# include <iostream>
# include <vector>
using namespace std;

int bs (vector <int> &arr, int low, int high , int target)
{
    if(low > high)
    {
        return -1;
    }

    int mid = low + (high - low) / 2;

    if(arr[mid] == target)
    {
        return mid;
    }
    else if (target > arr[mid])
    {
        return bs(arr, mid + 1, high, target);
    }
    else
    {
        return bs(arr, low, mid - 1, target);
    }
}

int search(vector <int> &arr, int target)
{
    return bs(arr, 0, arr.size() - 1, target);
}

int main()
{
    vector <int> arr = {3, 4, 6, 7, 9, 12, 16, 17};

    int target;
    cout << "Target value is : ";
    cin >> target;

    int result = search(arr, target);

    if(result == -1)
    {
        cout << "Target not found !!";
    }
    else
    {
        cout << "Target found at index " << result << " ";
    }

    return 0;
}