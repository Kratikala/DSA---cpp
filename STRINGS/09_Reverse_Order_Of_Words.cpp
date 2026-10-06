/*
Topic      : Strings
Problem    : Reverse Words in a String
Platform   : LeetCode 151

Approach   : Read/Write Pointers + In-place Reversal
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

string reverse_order(string &str)
{
    int read = 0;
    int write = 0;

    // Remove unwanted spaces
    while(read < str.length())
    {
        while(read < str.length() && str[read] == ' ')
        {
            read++;
        }
        if(read == str.length())
        {
            break;
        }
        if(write > 0)
        {
            str[write] = ' ';
            write++;
        }
        while(read < str.length() && str[read] !=  ' ')
        {
            str[write] = str[read];
            write++;
            read++;
        }
    }
    str.resize(write);
 
    // Reverse the whole string
    reverse(str, 0, str.length() - 1);

    // Reverse the words individually 
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
    string str = "  hello world  ";

    reverse_order(str);
    cout << "Reversed string is : " << str << " ";

    return 0;
}