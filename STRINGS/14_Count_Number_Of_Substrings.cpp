# include <iostream>
# include <string>
using namespace std;

int count_Valid(string &s)
{
    int count = 0;
    for(int i = 0; i < s.length(); i++)
    {
        int freq[10] = {0};

        for(int j = i; j < s.length(); j++)
        {
            freq[s[j] - 'a']++;

            int oddcount = 0;
            
            for(int k = 0; k < 10; k++)
            {
                if(freq[k] % 2 != 0)
                {
                    oddcount++;
                } 
            }

            if(oddcount <= 1)
            {
                count++;
            }
        }
    }
    return count;
}

int main()
{
    string s = "aabb";

    int result = count_Valid(s);
    cout << "Number of Valid Substrings are : " << result << " ";

    return 0;
}