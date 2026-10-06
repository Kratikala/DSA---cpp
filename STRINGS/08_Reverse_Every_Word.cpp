/*
Topic      : Strings
Problem    : Reverse Every Word in a String
Platform   : LeetCode 557 - Reverse Words in a String III

Approach   : Two Pointers + In-place Reversal
Time       : O(n)
Space      : O(1)
*/

# include <iostream>
# include <string>
using namespace std;

void reverse(string &str, int start, int end)
{
    while(start < end)
    {
        swap(str[start], str[end]);
        start++;
        end--;
    }
}

string reverse_word(string &str)
{
    int start = 0;
    int end = 0;

    while(end <= str.length())
    {

        if(end == str.length() || str[end] == ' ')
        {
            reverse(str, start, end - 1);
            start = end + 1;
        }
        end++;
    }
    return str;
}

int main()
{
    string str = "Let's take LeetCode contest";

    reverse_word(str);
    cout << "Reversed string is : " << str << " ";

    return 0;
}