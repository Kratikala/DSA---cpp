/*
Topic: Recursion / Strings
Problem: Reverse a string using recursion.
Platform: Practice

Approach: Recursively swap characters from both ends.
Time Complexity: O(n)
Auxiliary Space: O(n) with recursion.
*/

# include <iostream>
# include <string>
using namespace std;

void Reverse(string &str, int start, int end)
{
    if(start >= end)
    {
        return;
    }

    swap(str[start], str[end]);
    Reverse(str, start + 1, end - 1);
}


int main()
{
    string str = "kratika";

    int n = str.length();

    Reverse(str, 0, n - 1);
    cout << str << " ";
    
    return 0;
}