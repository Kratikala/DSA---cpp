/*
Topic      : Arrays
Problem    : Two Sum
Platform   : LeetCode 1

Approach   : Two Pointers 
Time       : O(nlogn) 
Space      : O(n)
*/


# include <iostream>
# include <algorithm>
# include <vector>
using namespace std;

pair <int, int> TwoSum(vector <int> &arr, int target)
{
    vector <pair<int, int>> numswithindex;
    for(int i = 0; i < arr.size(); i++){
        numswithindex.push_back({arr[i], i});
    }
    sort(numswithindex.begin(), numswithindex.end());

    int left = 0;
    int right = arr.size() - 1;
    int sum = numswithindex[left].first + numswithindex[right].first;

    while(left < right)
    {
        if (sum == target)
        {
            return{numswithindex[left].second, numswithindex[right].second};
        }

        else if(sum < target)
        {
            left++;
        }

        else
        {
            right--;
        } 
    }
    return {-1, -1};
}

int main()
{
    vector <int> arr = {2, 6, 5, 8, 11};

    int target;
    cout << "Enter value : ";
    cin >> target;

    pair <int, int> result = TwoSum(arr, target);

    if(result.first != -1)
    {
        cout << "Indices are : " << "[" << result.first << "," << result.second << "]" << " ";
    }
    else
    {
        cout << "No Pair Found" << endl;
    }

    return 0;
}