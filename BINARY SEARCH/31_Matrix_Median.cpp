/*
Topic      : Binary Search on Answers, 2D Arrays
Problem    : Matrix Median
Platform   : GeeksforGeeks / Striver A2Z

Approach   :
1. Find the minimum and maximum values using the first
   and last elements of each sorted row.
2. Calculate the required position: (n * m) / 2 + 1.
3. Apply binary search on the value range [low, high].
4. For each mid value, use binary search in every row
   to find the first element greater than mid.
5. The first index gives the number of elements <= mid.
   Add these counts across all rows.
6. If count < required, search the larger values.
   Otherwise, search the smaller values, including mid.

Time       : O(n * log(m) * log(max - min + 1))
Space      : O(1) auxiliary space
*/

# include <iostream>
# include <vector>
# include <algorithm>
using namespace std;

int median(vector<vector<int>> &mat)
{
    int n = mat.size();
    int m = mat[0].size();

    int low = mat[0][0];
    int high = mat[0][m - 1];
    for(int i = 0; i < n; i++)
    {
        if(mat[i][0] < low)
        {
            low = mat[i][0];
        }
        if(mat[i][m - 1] > high)
        {
            high = mat[i][m - 1];
        }
    }

    int required = (n * m) / 2 + 1;

    while(low < high)
    {
        int mid1 = low + (high - low) / 2;
        int count = 0;

        for(int i = 0; i < n; i++)
        {
            int low = 0;
            int high = m - 1;
            int firstindex = m;

            while(low <= high)
            {
                int mid = low + (high - low) / 2;

                if(mat[i][mid] > mid1)
                {
                    firstindex = mid;
                    high = mid - 1;
                }
                else
                {
                    low = mid + 1;
                }
            }
            count += firstindex;
        }

        if(count < required)
        {
            low = mid1 + 1;
        }
        else
        {
            high = mid1;
        }
    }
    return low;
}

int main()
{
    vector<vector<int>> mat = {{1, 3, 8},{2, 3, 4},{1, 2, 5}};

    int answer = median(mat);
    cout << "Median is : " << answer << " ";

    return 0;
}