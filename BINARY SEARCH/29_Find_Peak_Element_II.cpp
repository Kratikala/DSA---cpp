/*
Topic      : Binary Search on 2D Arrays
Problem    : Find a Peak Element II
Platform   : LeetCode 1901

Approach   : Binary Search on Columns
Time       : O(n * log(m))
Space      : O(1)
*/

# include <iostream>
# include <vector>
# include <climits>
using namespace std;

pair <int, int> peak(vector<vector<int>> mat)
{
    int n = mat.size();
    int m = mat[0].size();

    int low = 0;
    int high = m - 1;

    while(low <= high)
    {
        int mid = low + (high - low) / 2;

        int maxrow = 0;
        for(int i = 0; i < n; i++)
        {
            if(mat[i][mid] > mat[maxrow][mid])
            {
                maxrow = i;
            }
        }

        int left = mid > 0 ? mat[maxrow][mid - 1] : INT_MIN;
        int right = mid < m - 1 ? mat[maxrow][mid + 1] : INT_MIN;
        int curr = mat[maxrow][mid];

        if(curr > left && curr > right)
        {
            return {maxrow, mid};
        }
        else if(left > curr)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return {-1, -1};
}

int main()
{
    vector<vector<int>> mat = {{10, 20, 15},{21, 30, 14},{7, 16, 32}};

    pair<int, int> ans = peak(mat);
    
    if (ans.first == -1)
    {
        cout << "Target not found";
    }
    else 
    {
        cout << "Target found at row " << ans.first << ", column " << ans.second;
    }
    return 0;
}