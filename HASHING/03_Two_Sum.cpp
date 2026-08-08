/*
Topic      : Hashing
Problem    : Two Sum
Platform   : LeetCode 1

Approach   : Hash Map
Time       : O(n) average
Space      : O(n)
*/

# include <iostream>
# include <vector>
# include <unordered_map>
using namespace std;

int main()
{
    vector <int> arr = {2, 7, 11, 15};
    unordered_map <int, int> mp;

    int target;
    cout << "Enter target value : ";
    cin >> target;

    for(int i = 0; i < arr.size(); i++)
    {
        int current = arr[i];
        int required = target - current;

        if(mp.find(required) != mp.end())
        {
            cout << mp[required] << " " << i;
        }
        mp[current] = i;
    }
    return 0;
}