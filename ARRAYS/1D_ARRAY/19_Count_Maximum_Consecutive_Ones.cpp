/*
Topic      : Arrays
Problem    : Maximum Consecutive Ones
Platform   : LeetCode 485

Approach   : Running Count + Maximum
Time       : O(n)
Space      : O(1)
*/


# include <iostream>
# include <vector>
using namespace std;

int MaximumOnes(vector <int> arr)
{
    int n = arr.size();

    int count = 0;
    int maxi = 0;

    for(int i = 0; i < n; i++)
    {
        if(arr[i] == 1)
        {
            count ++;
            maxi = max(maxi, count);
        }

        else
        {
            count = 0;
        }
    }

    return maxi;
}

int main()
{
    vector <int> arr = {1, 1, 0, 1, 1, 1};

    int result = MaximumOnes(arr);
    cout << "Maximum Number of Consecutive Ones are : " << result << " ";

    return 0;
}
