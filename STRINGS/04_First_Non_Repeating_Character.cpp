/*
Topic      : Strings
Problem    : First Non-Repeating Character
Platform   : Basic C++ Practice

Approach   : Frequency Map + Two Passes
Time       : O(n log k)
Space      : O(k)
*/

# include <iostream>
# include <string>
# include <map>
using namespace std;

char first_non_repeating(string &str)
{
    map<char, int> freq;

    for(int i = 0; i < str.length(); i++)
    {
        freq[str[i]]++;
    }

    for(int i = 0; i < str.length(); i++)
    {
        if(freq[str[i]] == 1)
        {
            return str[i];
        }
    }
    return '\0';
}

int main()
{
    string str = "kratika";

    char result = first_non_repeating(str);

    if(result != '\0')
    {
        cout << "The First Non-Repeating character is : " << result << " ";
    }
    else
    {
        cout << "Not found";
    }

    return 0;
}