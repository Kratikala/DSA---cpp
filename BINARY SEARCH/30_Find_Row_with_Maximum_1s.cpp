/*
Topic      : Binary Search on 2D Arrays
Problem    : Find the Row with Maximum Ones
Platform   : GFG

Approach   : Binary Search on Each Row
Time       : O(n log m)
Space      : O(1) auxiliary space
*/

# include <iostream>
# include <vector>
using namespace std;

int ones(vector<vector<int>> &mat)
{
    if(mat.empty())
    {
        return -1;
    }

    int n = mat.size();
    int m = mat[0].size();

    int maxones = 0;
    int answerrow = -1;

    for(int i = 0; i < n; i++)
    {
        int low = 0;
        int high = m - 1;

        int firstindex = -1;

        while(low <= high)
        {
            int mid = low + (high - low) / 2;

            if(mat[i][mid] == 1)
            {
                firstindex = mid;
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }

        int count = 0;
        if(firstindex == -1)
        {
            count = 0;
        }
        else
        {
            count = m - firstindex;
        }

        if(count > maxones)
        {
            maxones = count;
            answerrow = i;
        }
    }
    return answerrow;
}

int main()
{
    vector<vector<int>> mat = {{1, 1, 1},{0, 0, 1},{0, 0, 0}};

    int answer = ones(mat);
    cout << "Row with maximum ones is : " << answer << " ";

    return 0;
}