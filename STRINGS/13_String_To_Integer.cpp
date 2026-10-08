/*
Topic      : Strings
Problem    : String to Integer (atoi)
Platform   : LeetCode 8

Approach   : String Parsing + Sign Handling + Overflow Check
Time       : O(n)
Space      : O(1)
*/

# include <iostream>
# include <string>
# include <cctype>
# include <climits>
using namespace std;

int string_integer(string &s)
{
    int i = 0;
    int number = 0;
    int sign = 1;

    while(s[i] == ' ')
    {
        i++;
    }

    if(s[i] == '-')
    {
        sign = -1;
        i++;
    }

    while(i < s.length() && isdigit(s[i]))
    {
        int digit = s[i] - '0';

        if (number > INT_MAX / 10 || (number == INT_MAX / 10 && digit > INT_MAX % 10))
        {
            return sign == 1 ? INT_MAX : INT_MIN;
        }

        number = number * 10 + digit;
        i++;
    }

    number *= sign;
    return number;
}

int main()
{
    string s = "--42";

    int result = string_integer(s);
    cout << "Integer is : " << result << " ";

    return 0;
}