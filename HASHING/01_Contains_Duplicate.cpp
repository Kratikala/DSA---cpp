/*
Topic      : Hashing
Problem    : Contains Duplicate
Platform   : LeetCode 217

Approach   : Hash Set (unordered_set)
Time       : O(n) average
Space      : O(n)
*/


# include <iostream>
# include <unordered_set>
using namespace std;

int main()
{
    int arr[5] = {1, 1, 2, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    unordered_set <int> st;

    for(int i = 0; i < n; i++)
    {
        if(st.find(arr[i]) != st.end())
        {
            cout << "Duplicate Found";
            return 0;
        }

        st.insert(arr[i]);
    }

    cout << "No Duplicate Found";
    return 0;
}