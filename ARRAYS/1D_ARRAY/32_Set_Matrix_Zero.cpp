/*
Topic      : Matrix
Problem    : Set Matrix Zeroes
Platform   : LeetCode 73 / GFG

Approach   : Use the first row and first column as markers to store which rows and columns contain zero. Use two flags to separately track whether the first row or first column originally contained zero.
Time       : O(n * m)
Space      : O(1)
*/

# include <iostream>
# include <vector> 
using namespace std;

void SetZeros(vector<vector<int>>&matrix)
{
    int rsize = matrix.size();
    int csize = matrix[0].size();
    bool firstrowzero = false;
    bool firstcolumnzero = false;

    for(int j = 0; j < csize; j++)
    {
        if(matrix[0][j] == 0)
        {
            firstrowzero = true;

        }
    }

    for(int i = 0; i < rsize; i++)
    {
        if(matrix[i][0] == 0)
        {
            firstcolumnzero = true;
        }
    }

    for(int i = 1; i < rsize; i++)
    {
        for(int j = 1; j < csize; j++)
        {
            if(matrix[i][j] == 0)
            {
                matrix[i][0] = 0;
                matrix[0][j] = 0;
            }
        }
    }

    for(int i = 1; i < rsize; i++)
    {
        for(int j = 1; j < csize; j++)
        {
            if(matrix[i][0] == 0 || matrix[0][j] == 0)
            {
                matrix[i][j] = 0;
            }
        }
    }

    if(firstrowzero)
    {
        for(int j = 0; j < csize; j++)
        {
            matrix[0][j] = 0;
        }
    }

    if(firstcolumnzero)
    {
        for(int i = 0; i < rsize; i++)
        {
            matrix[i][0] = 0;
        }
    }
}

int main()
{
    vector<vector<int>> matrix = {{1, 2, 3}, {0, 4, 5}, {6, 7, 8}};

    SetZeros(matrix);

    for(int i = 0; i < matrix.size(); i++)
    {
        for(int j = 0; j < matrix[0].size(); j++)
        {
            cout << matrix[i][j];
        }
        cout << endl;
    }
    return 0;
}