/*
Topic      : Strings
Problem    : Roman to Integer
Platform   : LeetCode 13

Approach   : Hash Map + Greedy Traversal
Time       : O(n)
Space      : O(1)
*/

# include <iostream>
# include <string>
# include <map>
using namespace std;

int roman_integer(string &str)
{
    map<char, int> values = {{'I', 1},{'V', 5},{'X', 10},{'L', 50},{'C', 100},{'D', 500},{'M', 1000}};

    int sum = 0;

    for(int i = 0; i < str.length(); i++)
    {
        int current = values[str[i]];

        if(i != str.length() && current < values[str[i + 1]])
        {
            sum -= current;
        }
        else
        {
            sum += current;
        }
    }
    return sum;
}

int main()
{
    string str = "MCMXCIV";

    int result = roman_integer(str);
    cout << "Integer To Roman is : " << result << " ";

    return 0;
}