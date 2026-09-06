/*
Topic      : Binary Search
Problem    : Search Insert Position
Platform   : LeetCode 35
Approach   : Binary Search
Time       : O(log n)
Space      : O(1)
*/

# include <iostream>
# include <vector>
using namespace std;

int search(vector<int> arr, int target, int n)
{
    int low = 0;
    int high = n - 1;
    int ans = n;

    while(low <= high)
    {
        int mid = low + (high - low) / 2;

        if(arr[mid] >= target)
        {
            ans = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return ans;
}

int main()
{
    vector <int> arr = {1, 2, 4, 7};

    int target;
    cout << "Enter target value : ";
    cin >> target;

    int n = arr.size();

    int result = search(arr, target, n);
    cout << "Insert Position is : " << result << " ";

    return 0;
}