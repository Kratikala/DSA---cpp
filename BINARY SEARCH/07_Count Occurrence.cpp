/*
Topic      : Binary Search
Problem    : Count Occurrences in a Sorted Array
Platform   : GFG / Practice
Approach   : Find first and last occurrence using Binary Search
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
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return ans;
}

int count(vector <int> arr, int target)
{
    int first = Findfirst(arr, target);
    int last = Findlast(arr, target);

    int count = last - first + 1;

    return count;
}

int main()
{
    vector <int> arr = {2, 2, 3, 3, 3, 3, 4, 5};

    int target;
    cout << "Enter target value : ";
    cin >> target;

    int result = count(arr, target);
    cout << "Occurrence : " << result << " ";

    return 0;
}