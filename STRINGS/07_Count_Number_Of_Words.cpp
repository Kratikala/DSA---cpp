/*
Topic      : Strings
Problem    : Count Number of Words in a String
Platform   : Basic C++ Practice / Leetcode 434

Approach   : Word Boundary Detection
Time       : O(n)
Space      : O(1)
*/

# include <iostream>
# include <string>
using namespace std;

int count_words(string &str)
{
    int count = 0;
    int start = 0;

    while(start < str.length())
    {
        if(str[start] != ' ')
        {
            if(start == 0 || str[start - 1] == ' ')
            {
                count++;
            }
        }
        start++;
    }
    return count;
}

int main()
{
    string str = "My name is Kratika Lekhra";

    int result = count_words(str);
    cout << "Number of words are : " << result << " ";

    return 0;
}