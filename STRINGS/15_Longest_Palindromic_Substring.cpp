/*
Topic      : Strings
Problem    : Longest Palindromic Substring
Platform   : LeetCode 5

Approach   : Expand Around Center
Time       : O(n^2)
Space      : O(1) auxiliary space
*/

# include <iostream>
# include <string>
using namespace std;

string LPS(string &s)
{
    if(s.length() <= 1)
    {
        return s;
    }

    int n = s.length();
    int beststart = 0;
    int bestlen = 0;

    for(int i = 0; i < n; i++)
    {
        int low = i;
        int high = i;

        while(low >= 0 && high < n && s[low] == s[high])
        {
            low--;
            high++;
        }

        int currentlen = high - low - 1;
        if(currentlen > bestlen)
        {
            bestlen = currentlen;
            beststart = low + 1;
        }

        low = i;
        high = i + 1;

        while(low >= 0 && high < n && s[low] == s[high])
        {
            low--;
            high++;
        }

        currentlen = high - low - 1;
        if(currentlen > bestlen)
        {
            bestlen = currentlen;
            beststart = low + 1;
        }
    }
    return s.substr(beststart, bestlen);
}

int main()
{
    string s = "abrbadaadab";

    string result = LPS(s);
    cout << "Longest Plaindromic String is : " << result << " ";

    return 0;
}
