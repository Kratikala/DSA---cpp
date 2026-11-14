/*
Topic : Recursion
Problem : Count all subsequences whose sum equals K
Platform : Striver A2Z

Approach : Pick / Not Pick
Time Complexity : O(2^N)
Space Complexity : O(N) recursion stack.
*/

# include <iostream>
# include <vector>
using namespace std;

int helper(vector <int> &nums, int index, int target)
{
    if(index == nums.size())
    {
        if(target == 0)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }

    int notPick = helper(nums, index + 1, target);
 
    int Pick = helper(nums, index + 1, target - nums[index]);

    return Pick + notPick;

}

int result(vector<int>& nums, int target)
{
    return helper(nums, 0, target);
}

int main()
{
    int target;
    cout << "Enter target sum : ";
    cin >> target;

    vector <int> nums = {1, 2, 3};

    int answer = result(nums, target);
    cout << "Number of Subsequences with sum k are : " << answer << " ";

    return 0;
}
