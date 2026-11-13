/*
Topic : Recursion
Problem : Print all subsequences whose sum equals K.
Platform : Striver A2Z

Approach : Use pick and non-pick recursion while maintaining the current subsequence and its sum. Print only those subsequences whose sum equals K.
Time Complexity : O(N × 2^N) (including printing)
Space Complexity : O(N) auxiliary recursion/temporary subsequence space.
*/

# include <iostream>
# include <vector>
using namespace std;

void helper(vector<vector<int>> &result, vector <int> &current, vector <int> &nums, int index, int target)
{
    if(index == nums.size())
    {
        if(target == 0)
        {
            result.push_back(current);
        }
        return;
    }
    
    helper(result, current, nums, index + 1, target);
 
    current.push_back(nums[index]);
    helper(result, current, nums, index + 1, target - nums[index]);
    current.pop_back();
}

vector<vector<int>> subsets(vector<int>& nums, int target)
{
    vector<vector<int>> result = {};
    vector <int> current = {};

    helper(result, current, nums, 0, target);

    return result;
}

int main()
{
    int target;
    cout << "Enter target sum : ";
    cin >> target;

    vector <int> nums = {1, 2, 3};

    vector <vector<int>> answer = subsets(nums, target);

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
