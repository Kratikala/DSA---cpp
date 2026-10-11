/*
Topic      : Strings
Problem    : Sum of Beauty of All Substrings
Platform   : LeetCode 1781

Approach   : Frequency Array
Time       : O(n^2)
Space      : O(1)
*/

#include <iostream>
#include <string>
#include <algorithm>
#include <climits>
using namespace std;

int beauty_sum(string s) 
{
    int beautysum = 0;

    for (int i = 0; i < s.length(); i++) 
    {
        int freq[26] = {0};

        for (int j = i; j < s.length(); j++) 
        {
            freq[s[j] - 'a']++;

            int maxfreq = 0;
            int minfreq = INT_MAX;

            for (int k = 0; k < 26; k++) 
            {
                if (freq[k] > 0) 
                {
                    maxfreq = max(maxfreq, freq[k]);
                    minfreq = min(minfreq, freq[k]);
                }
            }
            beautysum += maxfreq - minfreq;
        }
    }
    return beautysum;
}

int main() 
{
    string s = "aabcbaa";

    int result = beauty_sum(s);
    cout << "The sum of beauty of all substrings is : " << result << " ";

    return 0;
}
