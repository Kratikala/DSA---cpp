/*
Topic      : Arrays
Problem    : Two Sum
Platform   : LeetCode 1

Approach   : Two Pointers 
Time       : O(nlogn) 
Space      : O(n)
*/


# include <iostream>
# include <algorithm>
# include <vector>
using namespace std;

pair <int, int> TwoSum(vector <int> &arr, int target)
{
    sort(arr.begin(), arr.end());

    int left = 0;
    int right = arr.size() - 1;

    while(left < right)
    {
        if (arr[left] + arr[right] > target)
        {
            right--;
        }

        else if(arr[left] + arr[right] < target)
        {
            left++;
        }

        else
        {
            return {left, right};
        } 
    }
    return {-1, -1};
}

int main()
{
    vector <int> arr = {2, 6, 5, 8, 11};

    int target;
    cout << "Enter value : ";
    cin >> target;

    pair <int, int> result = TwoSum(arr, target);

    if(result.first != -1)
    {
        cout << "Indices are : " << "[" << result.first << "," << result.second << "]" << " ";
    }
    else
    {
        cout << "No Pair Found" << endl;
    }

    return 0;
}