/*
Topic      : Array / Prefix Sum / Hashing
Problem    : Subarray Sum Equals K
Platform   : LeetCode 560 / GFG

Approach   : Maintain a running prefix sum and store the frequency of each prefix sum in a hash map. For the current prefix sum, check whether (sum - k) has appeared before. If it has, all those previous occurrences represent subarrays ending at the current index with sum k. Initialize mp[0] = 1 to handle subarrays starting from index 0.
Time       : O(n) average
Space      : O(n)
*/

# include <iostream>
# include <unordered_map>
# include <vector>
using namespace std;

int Sum (vector <int> arr, int k)
{
    int sum = 0;
    int count = 0;

    unordered_map <int, int> mp;
    mp[0] = 1;

    for(int i = 0; i < arr.size(); i++)
    {
        sum += arr[i];

        int remaining = sum - k;

        if(mp.find(remaining) != mp.end())
        {
            count += mp[remaining];
        }
        mp[sum]++;
    }
    return count;
}

int main()
{
    vector <int> arr = {3, 1, 2, 4};

    int k;
    cout << "Enter sum value : " << " ";
    cin >> k;

    int ans = Sum(arr, k);
    cout << "Count : " << ans << " ";

    return 0;
}
