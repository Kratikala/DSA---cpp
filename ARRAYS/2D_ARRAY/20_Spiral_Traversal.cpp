/*
Topic      : Matrix
Problem    : Spiral Matrix
Platform   : LeetCode 54 / GFG

Approach   : Traverse the matrix layer by layer using four boundaries: top, bottom, left, and right. Traverse the top row, right column, bottom row, and left column, then shrink the boundaries after each traversal.
Time       : O(n * m)
Space      : O(1)
*/

# include <iostream>
# include <vector>
using namespace std;

vector<int> spiral(vector<vector<int>> &matrix)
{
    int top = 0;
    int bottom = matrix.size() - 1;
    int left = 0;
    int right = matrix[0].size() - 1;

    vector <int> result;

    while(top <= bottom && left <= right)
    {
        // Top Row
        for(int j = left; j <= right; j++)
        {
            result.push_back(matrix[top][j]);
        }
        top++;

        // Right Column
        for(int i = top; i <= bottom; i++)
        {
            result.push_back(matrix[i][right]);
        }
        right--;

        // Bottom Row
        if(top <= bottom)
        {
            for(int j = right; j >= left; j--)
            {
                result.push_back(matrix[bottom][j]);
            }
            bottom--;
        }

        // Left Column
        if(left <= right)
        {
            for(int i = bottom; i >= top; i--)
            {
                result.push_back(matrix[i][left]);
            }
            left++;
        }
    }
    return result;
}

int main()
{
    vector<vector<int>> matrix ={{1, 2, 3},{4, 5, 6},{7, 8, 9}};
    
    vector <int> ans = spiral(matrix);

    for(int x : ans)
    {
        cout << x << " ";
    }

    return 0;
}