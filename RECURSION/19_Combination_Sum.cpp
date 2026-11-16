/*
Topic : Recursion
Problem : Combination Sum
Platform : LeetCode 39

Approach : Use backtracking to pick candidates repeatedly until target becomes 0; pass i to allow reuse.

Time Complexity : Exponential
Space Complexity : O(target / minCandidate) recursion depth.
*/

# include <iostream>
# include <vector>
using namespace std;

void helper(int index, int target, vector<vector<int>> &result, vector <int> &nums, vector <int> &cs)
{
    if(target == 0)
    {
        result.push_back(cs);
        return;
    }

    if(index == nums.size()){
        return;
    }

    if(nums[index] > target){
        return;
    }

    for(int i = index; i < nums.size(); i++)
    {
        cs.push_back(nums[i]);
        helper(i, target - nums[i], result, nums, cs);
        cs.pop_back();
    }
}

vector<vector<int>> combinationSum(int target, vector <int> &nums)
{
    vector<vector<int>> result = {};
    vector <int> cs = {};

    helper(0, target, result, nums, cs);

    return result;
}

int main()
{
    int target;
    cout << "Enter the Sum : ";
    cin >> target;

    vector <int> nums = {2, 3, 5, 4};

    vector<vector<int>> answer = combinationSum(target, nums);
    
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


