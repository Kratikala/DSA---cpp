/*
Topic      : Strings
Problem    : Frequency of Every Character
Platform   : Basic C++ Practice

Approach   : Frequency Map
Time       : O(n log k)
Space      : O(k)
*/

# include <iostream>
# include <map>
# include <string>
using namespace std;

map <char, int> frequency(string &str)
{
    map <char, int> freq;

    for(int i = 0; i < str.length(); i++)
    {
        freq[str[i]]++;
    }
    return freq;
}

int main()
{
    string str = "Kratika";

    map<char, int> result = frequency(str);

    for(auto pair : result)
    {
        cout << pair.first << ":" << pair.second << endl;
    }

    return 0;
}