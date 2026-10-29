/*
Topic: Recursion / Backtracking
Problem: Generate all valid combinations of n pairs of parentheses.
Platform: LeetCode 22

Approach: Add '(' within its limit and ')' only when valid.
Time Complexity: O(n * Catalan(n))
Auxiliary Space: O(n), excluding output.
*/

# include <iostream>
# include <vector>
# include <string>
using namespace std;

void helper(int n, int open, int close, string current, vector <string> &result)
{
    if(current.size() == 2 * n)
    {
        result.push_back(current);
        return;
    }

    if(open < n)
    {
        helper(n, open + 1, close, current + '(', result);
    }

    if(close < open)
    {
        helper(n, open, close + 1, current + ')', result);
    }
}

vector <string> generate_parentheses(int n)
{
    vector <string> result;
    string current = "";

    helper(n, 0, 0, current, result);

    return result;
}

int main()
{
    int n;
    cout << "Enter n : ";
    cin >> n;

    vector <string> result = generate_parentheses(n);

    for(string s : result)
    {
        cout << s << " , ";
    }
    return 0;
}
