/*
Topic      : Binary Search on 2D Arrays
Problem    : Search in a Matrix II
Platform   : LeetCode 240

Approach   : Staircase Search from the Top-Right Corner
Time       : O(n + m)
Space      : O(1)
*/

# include <iostream>
# include <vector>
using namespace std;

pair <int, int> search(vector<vector<int>> &mat, int target){
    int n = mat.size();
    int m = mat[0].size();

    int row = 0;
    int col = m - 1;

    while(row < n && col >= 0){
        if(mat[row][col] == target){
            return {row, col};
        }
        else if (mat[row][col] < target){
            row++;
        }
        else{
            col--;
        }
    }
    return {-1, -1};
}

int main(){
    vector<vector<int>> mat = {{1, 4, 7, 11, 15},{2, 5, 8, 12, 19},{3, 6, 9, 16, 23},{10, 13, 14, 17, 24},{18, 21, 23, 24, 30}};

    int target;
    cout << "Enter value to search : ";
    cin >> target;

    pair<int, int> ans = search(mat, target);
    
    if (ans.first == -1)
    {
        cout << "Target not found";
    }
    else 
    {
        cout << "Target found at row " << ans.first << ", column " << ans.second;
    }
}