/*
Topic      : Strings
Problem    : Remove Outermost Parentheses
Platform   : LeetCode 1021

Approach   : Depth Tracking
Time       : O(n)
Space      : O(n)
*/

# include <iostream>
# include <string>
using namespace std;

string Parentheses(string &str)
{
    string ans;

    int depth = 0;

    for(int i = 0; i < str.length(); i++)
    {
        if(str[i] == '(')
        {
            if(depth > 0)
            {
                ans+= '(';
            }
            depth++;
        }

        else if(str[i] == ')')
        {
            depth--;

            if(depth > 0)
            {
                ans += ')';
            }
        }
    }
    return ans;
}

int main()
{
    string str = "(()())(())()";

    string result = Parentheses(str);
    cout << "Valid string is : " << result << " ";

    return 0;
}