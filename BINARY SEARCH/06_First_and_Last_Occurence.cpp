/*
Topic      : Binary Search
Problem    : Find First and Last Position of Element in Sorted Array
Platform   : LeetCode 34

Approach   : Binary Search
Time       : O(log n)
Space      : O(1)
*/

# include <iostream>
# include <vector>
using namespace std;

int Findfirst(vector <int> arr, int target)
{
    int low = 0;
    int high = arr.size() - 1;
    int ans = -1;

    while(low <= high)
    {
        int mid = low + (high - low) / 2;

        if(arr[mid] == target)
        {
            ans = mid;
            high = mid - 1;
        }
        else if(arr[mid] > target)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return ans;
}

int Findlast(vector <int> arr, int target)
{
    int low = 0;
    int high = arr.size() - 1;
    int ans = -1;

    while(low <= high)
    {
        int mid = low + (high - low) / 2;

        if(arr[mid] == target)
        {
            ans = mid;
            low = mid + 1;
        }
        else if(arr[mid] > target)
        {
            high = mid - 1;;
        }
        else
        {
            low = mid + 1;
        }
    }
    return ans;
}

pair <int, int> search(vector <int> arr, int target)
{
    int first = Findfirst(arr , target);
    int last = Findlast(arr, target);

    return {first, last};
}

int main()
{
    vector <int> arr = {3, 4, 13, 13, 13, 20, 40};

    int target;
    cout << "Enter target value : ";
    cin >> target;

    pair <int, int> result = search(arr, target);
    cout << result.first << " " << result.second;

    return 0;
}