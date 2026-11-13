/*
Topic : Recursion
Problem : Count all subsequences whose sum equals K.
Platform : Striver A2Z

Approach : Use pick and non-pick recursion while maintaining the current sum. Return the sum of the counts obtained from both recursive calls.
Time Complexity : O(2^N)
Space Complexity : O(N) recursion stack.
*/

# include <iostream>
# include <vector>
using namespace std;

void helper(vector<string> &result, string &current, int n)
{
    if(current.size() == n)
    {
        result.push_back(current);
        return;
    }

    current.push_back('0');
    helper(result, current, n);
    current.pop_back();

    if(current.empty() || current[current.size() - 1] != '1')
    {
        current.push_back('1');
        helper(result, current, n);
        current.pop_back();
    }
}

vector <string> generateBinaryStrings(int n)
{
    string current = "";
    vector<string> result = {};

    helper(result, current, n);

    return result;
}

int main()
{
    int n;
    cout << "Enter length of substring : ";
    cin >> n;

    vector <string> answers = generateBinaryStrings(n);

    for(auto strings : answers)
    {
        cout << strings << " "; 
    }
    return 0;
}