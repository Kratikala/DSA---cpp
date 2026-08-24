/*
Topic      : Arrays
Problem    : Longest Subarray With Sum 0
Platform : Striver's A - Z Sheet

Approach   : Prefix Sum + Hash Map
Time       : O(n)
Space      : O(n)
*/


# include <iostream>
# include <unordered_map>
# include <vector>
using namespace std;

int SumZero(vector <int> arr)
{
    unordered_map <int, int> mp;
    int n = arr.size();
    int sum = 0;
    int maxlength = 0;

    mp[0] = -1;

    for(int i = 0; i < n; i++)
    {
        sum += arr[i];

        if(mp.find(sum) != mp.end())
        {
            int oldindex = mp[sum];
            int length = i - oldindex;
            maxlength = max(maxlength, length);
        }

        else
        {
            mp[sum] = i;
        }
    }

    return maxlength;
}

int main()
{
    vector <int> arr = {9, -3, 3, -1, 6, -5};

    int result = SumZero(arr);
     cout << "Length is : " << result;

    return 0;
}