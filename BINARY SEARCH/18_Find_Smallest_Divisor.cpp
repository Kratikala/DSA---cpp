/*
Topic      : Binary Search on Answer
Problem    : Find the Smallest Divisor Given a Threshold
Platform   : LeetCode 1283

Approach   : Binary Search on Answer
Time       : O(n log(max(nums)))
Space      : O(1)
*/

# include <iostream>
# include <vector>
# include <cmath>
# include <algorithm>
using namespace std;

int divisor(vector <int> arr, int limit)
{
    int low = 1;
    int high = *max_element(arr.begin(), arr.end());

    while(low <= high)
    {
        int mid = low + (high - low) / 2;

        int ans = 0;
        int sum = 0;

        for(int i = 0; i < arr.size(); i++)
        {
            ans = ceil((double)arr[i] / mid);
            sum += ans;
        }

        if(sum > limit)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return low;
}

int main()
{
    vector <int> arr = {1, 2, 3, 4, 5};

    int limit;
    cout << "Enter Threshold Value : ";
    cin >> limit;

    int result = divisor(arr, limit);
    cout << "Minimum divisor is : " << result << " ";

    return 0;
}