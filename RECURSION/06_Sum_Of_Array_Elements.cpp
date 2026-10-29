/*
Topic: Recursion / Arrays
Problem: Calculate the sum of all elements in an array.
Platform: Practice

Approach: Recursively add each element to the remaining sum.
Time Complexity: O(n)
Auxiliary Space: O(n) with recursion.
*/

# include <iostream>
# include <vector>
using namespace std;

int helper(vector <int> &arr, int i)
{
    if(i == arr.size())
    {
        return 0;
    }

    return arr[i] + helper(arr, i + 1);
}

int sum(vector <int> &arr)
{
    return helper(arr, 0);
}

int main()
{
    vector <int> arr = {2, 4, 6, 8};

    cout << "SUM : " << sum(arr) << " ";
    return 0;
}