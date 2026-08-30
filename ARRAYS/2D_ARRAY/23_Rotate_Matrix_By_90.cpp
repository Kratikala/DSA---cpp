/*
Topic      : Matrix
Problem    : Rotate Image by 90 Degrees
Platform   : LeetCode 48 / GFG

Approach   : Transpose the matrix in-place by swapping elements across the main diagonal, then reverse every row using two pointers to achieve a 90-degree clockwise rotation.
Time       : O(n^2)
Space      : O(1)
*/

# include <iostream>
# include <vector>
using namespace std;

void Transpose(vector<vector<int>> &matrix)
{
    int rsize = matrix.size();
    int csize = matrix[0].size();

    for(int i = 0; i < rsize; i++)
    {
        for(int j = i + 1; j < csize; j++)
        {
            swap(matrix[i][j], matrix[j][i]);
        }
    }
}

void Rotate(vector<vector<int>> &matrix)
{

    Transpose(matrix);

    for(int i = 0; i < matrix.size(); i++)
    {
        int left = 0;
        int right = matrix[0].size() - 1;
        
        while(left < right)
        {
            swap(matrix[i][left], matrix[i][right]);
            left++;
            right--;
        } 
    } 
}

int main()
{
    vector<vector<int>> matrix = {{1, 2, 3},{4, 5, 6},{7, 8, 9}};

    Rotate(matrix);

    for(int i = 0; i < matrix.size(); i++)
    {
        for(int j = 0; j < matrix[0].size(); j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}