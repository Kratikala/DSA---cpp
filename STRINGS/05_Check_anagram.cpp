/*
Topic      : Strings
Problem    : Valid Anagram
Platform   : LeetCode 242

Approach   : Frequency Array
Time       : O(n)
Space      : O(1)
*/

# include <iostream>
# include <string>
using namespace std;

bool anagram(string &a, string &b)
{
    if(a.length() != b.length())
    {
        return false;
    }

    int freq1[26] = {0};

    for(int i = 0; i < a.length(); i++)
    {
        freq1[a[i] - 'a']++;
    }

    for(int i = 0; i < b.length(); i++)
    {
        freq1[b[i] - 'a']--;
    }

    for(int i = 0; i < 26; i++)
    {
        if(freq1[i] != 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    string a = "listen";
    string b = "sisent";

    if(anagram(a, b))
    {
        cout << "Anagram";
    }
    else
    {
        cout << "Not Anagram";
    }
    return 0;
}