/*
Topic : Recursion
Problem : Check if a subsequence with sum K exists.
Platform : Striver A2Z

Approach : Use pick and non-pick recursion while maintaining the current sum. Return true if the target sum is achieved; otherwise explore the remaining choices.
Time Complexity : O(2^N)
Space Complexity : O(N) recursion stack.
*/

# include <iostream>
# include <vector>
using namespace std;

bool helper(vector <int> &nums, int index, int target)
{
    if(index == nums.size())
    {
        if(target == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    bool notPick = helper(nums, index + 1, target);
 
    bool Pick = helper(nums, index + 1, target - nums[index]);

    return Pick || notPick;

}

bool result(vector<int>& nums, int target)
{
    return helper(nums, 0, target);
}

int main()
{
    int target;
    cout << "Enter target sum : ";
    cin >> target;

    vector <int> nums = {1, 2, 3};

    if(result(nums, target))
    {
        cout << "Subsequence exists";
    }
    else
    {
        cout << "Subsequence does not exist";
    }

    return 0;
}
