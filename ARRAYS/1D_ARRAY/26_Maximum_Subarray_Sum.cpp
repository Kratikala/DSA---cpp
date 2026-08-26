/*
Topic      : Arrays
Problem    : Maximum Subarray Sum
Platform   : LeetCode 53

Approach   : Kadane's Algorithm
Time       : O(n)
Space      : O(1)
*/


# include <iostream>
# include <vector>
# include <climits>
using namespace std;

int Maximum_Sum(vector <int> arr)
{
    int n = arr.size();
    int sum = 0;
    int maxi = INT_MIN;

    for(int i = 0; i < n; i++)
    {
        sum += arr[i];
        maxi = max(maxi, sum);

        if(sum < 0)
        {
            sum = 0;
        }
    }

    return maxi;
}

int main()
{
    vector <int> arr = {-2, -3, -5, -2, -7, -4};

    int result = Maximum_Sum(arr);
    cout << "Largest sum of subarray is : " << result << " ";

    return 0;
}
