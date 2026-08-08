/*
Topic      : Hashing
Problem    : Valid Anagram
Platform   : LeetCode 242

Approach   : Frequency Array
Time       : O(n)
Space      : O(1)
*/

# include <iostream>
# include <string>
using namespace std;

int length(string str)
{
    int count = 0;
    while(str[count] != '\0')
    {
        count++;
    }
    return count;
}

void Anagram(string a, string b)
{
    int alength = length(a);
    int blength = length(b);

    if(alength != blength)
    {
        cout << "Not Anagram";
        return;
    }

    int frequency1[26] = {0};
    for(int i = 0; i < alength; i++)
    {
        int index = a[i] - 'a';
        frequency1[index]++;
    }

    int frequency2[26] = {0};
    for(int i = 0; i < blength; i++)
    {
        int index = b[i] - 'a';
        frequency2[index]++;
    }

    for(int index = 0; index < 26; index++)
    {
        if(frequency1[index] != frequency2[index])
        {
            cout << "Not Anagram";
            return;
        }
    }

    cout << "Anagram";
}

int main()
{
    string a = "listen";
    string b = "silent";
    Anagram(a, b);
    return 0;
}
