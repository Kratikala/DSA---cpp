/*
Topic      : Binary Search on 2D Arrays
Problem    : Search in a 2D Matrix
Platform   : Striver A2Z / LeetCode 74

Approach   : Binary Search on a flattened matrix
Time       : O(log(n * m))
Space      : O(1)
*/

# include <iostream>
# include <vector>
using namespace std;

bool search(vector<vector<int>> &mat, int target)
{
    int n = mat.size();
    int m = mat[0].size();

    int low = 0;
    int high = n * m - 1;

    while(low <= high)
    {
        int mid = low + (high - low) / 2;

        int row = mid / m;
        int col = mid % m;

        if(mat[row][col] == target)
        {
            return true;
        }
        else if(mat[row][col] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return false;
}

int main()
{
    vector<vector<int>> mat = {{3, 4, 6, 8},{10, 12, 13, 15},{17, 18, 19, 20}};

    int target;
    cout << "Enter value to search : ";
    cin >> target;

    if(search(mat, target))
    {
        cout << "Target Found";
    }
    else{
        cout << "Target not Found";
    }
    return 0; 
}