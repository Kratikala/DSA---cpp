/*
Topic      : Arrays + Hashing
Problem    : Longest Consecutive Sequence
Platform   : LeetCode 128

Approach   : Unordered Set
Time       : O(n) Average
Space      : O(n)
*/

# include <iostream>
# include <vector>
# include <unordered_set>
using namespace std;

int LCS(vector <int> arr)
{
    int n = arr.size();
    int maxlength = 0;
    int count;
    int start;

    unordered_set <int> st;
    
    for(int i = 0; i < n; i++)
    {
        st.insert(arr[i]);
    }

    for(auto x : st)
    {
        if(st.find(x - 1) != st.end()){
            continue;
        }
        start = x;
        count = 1;

        while(st.find(start + 1) != st.end())
        {
            start++;
            count++;
        }
        maxlength = max(maxlength, count);
    }
    return maxlength;
}

int main()
{
    vector <int> arr = {100, 4, 200, 1, 3, 2};

    int result = LCS(arr);
    cout << "Longest Consecutive Sequence is : " << result << " ";

    return 0;
}