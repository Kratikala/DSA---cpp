/*
Topic : Recursion
Problem : Print all possible subsequences of an array.
Platform : Striver A2Z

Approach : Use pick and non-pick recursion.
Time Complexity : O(N × 2^N) (including printing each subsequence)
Space Complexity : O(N) auxiliary recursion/temporary subsequence space.
*/


# include <iostream>
# include <vector>
using namespace std;

void helper(vector <int> &nums, vector<vector<int>> &result, int index, vector <int> &current)
{
    if(index == nums.size())
    {
        result.push_back(current);
        return;
    }

    helper(nums, result, index + 1, current);

    current.push_back(nums[index]);
    helper(nums, result, index + 1, current);
    current.pop_back();
}

vector<vector<int>> subsets(vector<int>& nums)
{
    vector <int> current = {};
    vector<vector<int>> result = {};

    helper(nums, result, 0, current);

    return result;
}

int main()
{
    vector <int> nums = {1, 2, 3};

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