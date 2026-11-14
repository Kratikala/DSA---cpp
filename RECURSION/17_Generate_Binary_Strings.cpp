/*
Topic : Recursion / Backtracking
Problem : Generate Binary Strings Without Consecutive 1s
Platform : Striver A2Z

Approach : Pick / Not Pick with Constraints
Time Complexity : O(n * 2^n) upper bound including output construction.
Auxiliary Space Complexity : O(n) recursion stack and current string.
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