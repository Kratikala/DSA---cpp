/*
Topic      : Arrays
Problem    : Missing Number
Platform   : LeetCode 268

Approach   : Expected Sum - Array Sum
Time       : O(n)
Space      : O(1)
*/


# include <iostream>
# include <vector>
using namespace std;

int MissingNumber(vector<int> arr)
{
    int n = arr.size();

    int expectedSum = n * (n + 1) / 2;

    int arraySum = 0;

    for(int i = 0; i < arr.size(); i++)
    {
        arraySum += arr[i];
    }

    return expectedSum - arraySum;
}

int main()
{
    vector<int> arr = {0, 1, 2, 4, 5};

    int missing = MissingNumber(arr);

    cout << "Missing Number is: " << missing;

    return 0;
}
