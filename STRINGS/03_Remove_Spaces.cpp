/*
Topic      : Strings
Problem    : Remove Spaces from String
Platform   : Basic C++ Practice

Approach   : Two Pointers (Read/Write)
Time       : O(n)
Space      : O(1)
*/

# include <iostream>
# include <string>
using namespace std;

void remove_spaces(string &str)
{
    int read = 0;
    int write = 0;

    while(read < str.length())
    {
        if(str[read] != ' ')
        {
            str[write] = str[read];
            read++;
            write++;
        }
        else
        {
            read++;
        }
    }
    str.resize(write);
}

int main()
{
    string str = "Hello World";

    remove_spaces(str);
    cout << "String is : " << str << " ";

    return 0;
}

