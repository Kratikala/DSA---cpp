/*
Topic      : Strings
Problem    : Valid Palindrome
Platform   : LeetCode 125

Approach   : Two Pointers
Time       : O(n)
Space      : O(1)
*/

# include <iostream>
# include <string>
# include <cmath>
using namespace std;

bool palindrome(string &str)
{
    int start = 0;
    int end = str.length() - 1;

    while(start < end)
    {
        while(start < end && !isalnum(str[start]))
        {
            start++;
        }
        while(start < end && !isalnum(str[end]))
        {
            end--;
        }

        if(tolower(str[start]) != tolower(str[end]))
        {
            return false;
        }
        else
        {
            start++;
            end--;
        }
    }
    return true;
}

int main()
{
    string str = "ababa";

    if(palindrome(str))
    {
        cout << "String is Palindrome";
    }
    else
    {
        cout << "String is not Palindrome";
    }

    return 0;
}