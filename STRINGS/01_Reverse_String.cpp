/*
Topic      : Strings
Problem    : Reverse String
Platform   : LeetCode 344

Approach   : Two Pointers
Time       : O(n)
Space      : O(1)
*/

# include <iostream>
# include <string>
using namespace std;

void reverse(string &str)
{
    int start = 0;
    int end = str.length() - 1;

    while(start < end)
    {
        swap(str[start], str[end]);
        start++;
        end--;
    }
}

int main()
{
    string str = "Kratika";

    reverse(str);
    cout << "Reversed String : " << str << " ";

    return 0;
}