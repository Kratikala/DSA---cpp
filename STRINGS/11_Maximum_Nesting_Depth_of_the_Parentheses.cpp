/*
Topic      : Strings
Problem    : Maximum Nesting Depth of Parentheses
Platform   : LeetCode 1614

Approach   : Depth Tracking
Time       : O(n)
Space      : O(1)
*/

# include <iostream>
# include <string>
using namespace std;

int max_depth(string &str)
{
    int depth = 0;
    int maxdepth = 0;

    for(int i = 0; i < str.length(); i++)
    {
        if(str[i] == '(')
        {
            depth++;

            if(depth > maxdepth)
            {
                maxdepth = depth;
            }
        }

        else if (str[i] == ')')
        {
            depth--;
        }
    }
    return maxdepth;
}

int main()
{
    string str = "(1+(2*3)+((8)/4))+1";
    
    int result = max_depth(str);
    cout << "Maximum depth is : " << result << " ";

    return 0;
}