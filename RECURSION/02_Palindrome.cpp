/*
Topic: Recursion / Strings
Problem: Check whether a string reads the same forward and backward.
Platform: Practice

Approach: Recursively compare characters from both ends.
Time Complexity: O(n)
Auxiliary Space: O(n) with recursion.
*/

# include <iostream>
# include <string>
using namespace std;

bool Palindrome(string str, int start, int end)
{
    if(start >= end)
    {
        return true;
    }
    if(str[start] != str[end])
    {
        return false;
    }
    return Palindrome(str, start + 1, end - 1);
}

int main(){
    string str = "abcba";

    int n = str.size();

    if(Palindrome(str, 0, n - 1))
    {
        cout << "String is Palindrome";
    }
    else
    {
        cout << "String is Not Palindrome";
    }
    return 0;
}