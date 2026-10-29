/*
Topic: Recursion / Backtracking
Problem: Generate all possible subsets of an array.
Platform: LeetCode 78

Approach: Recursively exclude or include each element.
Time Complexity: O(n * 2^n)
Auxiliary Space: O(n), excluding output.
*/

# include <iostream>
# include <vector>
using namespace std;

void helper(vector <int> &nums, int index, vector <int> &current, vector<vector<int>> &result)
{
    if(index == nums.size())
    {
        result.push_back(current);
        return;
    }
    // Exclude 
    helper(nums, index + 1, current, result);

    // Include
    current.push_back(nums[index]);
    helper(nums, index + 1, current, result);
    current.pop_back();
}

vector<vector<int>> subsets(vector<int>& nums)
{
    vector <int> current = {};
    vector<vector<int>> result = {};

    helper(nums, 0, current, result);

    return result;
}

int main()
{
    vector <int> nums = {1, 2};

    vector <vector<int>> answer = subsets(nums);

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

