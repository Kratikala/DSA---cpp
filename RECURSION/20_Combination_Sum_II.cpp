/*
Topic : Recursion
Problem : Combination Sum II
Platform : LeetCode 40

Approach : Use backtracking to pick each element once, sort candidates, and skip duplicates at the same recursion level.

Time Complexity : Exponential
Space Complexity : O(N) auxiliary space, excluding results.
*/

# include <iostream>
# include <vector>
# include <algorithm>
using namespace std;

void helper(int index, int target, vector<vector<int>> &result, vector<int> &ds, vector<int> &candidates)
{
    if(target == 0)
    {
        result.push_back(ds);
        return;
    }
    
    if(index == candidates.size())
    {
        return;
    }

    for(int i = index; i < candidates.size(); i++)
    {
        if(candidates[i] > target)
        {
            break;
        }

        if(i > index && candidates[i] == candidates[i - 1])
        {
            continue;
        }
        ds.push_back(candidates[i]);
        helper(i + 1, target - candidates[i], result, ds, candidates);
        ds.pop_back();
    }
}

vector<vector<int>> combinationSum2(vector<int>& candidates, int target)
{
    vector<vector<int>> result = {};
    vector<int> ds = {};

    sort(candidates.begin(), candidates.end());

    helper(0, target, result, ds, candidates);

    return result;
}

int main()
{
    int target;
    cout << "Enter the Sum : ";
    cin >> target;

    vector <int> candidates = {2, 5, 2, 1, 2};

    vector<vector<int>> answer = combinationSum2(candidates, target);
    
    for(int i = 0; i < answer.size(); i++)
    {
        cout << "[ ";
        for(int j = 0; j < answer[i].size(); j++)
        {
            cout << answer[i][j] << " ";
        }
        cout << "]\n";
    }
    return 0;
}
