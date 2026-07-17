// Problem: Search Element in Matrix
//
// Objective:
// Search for a given element in a 2D array.
//
// Concepts Used:
// - Matrix Traversal
// - Linear Search
//
// Time Complexity: O(rows × cols)
// Space Complexity: O(1)


# include <iostream>
using namespace std;

void search (int arr[][3], int rSize, int cSize, int target)
{
    bool found = false;
    for (int i = 0; i < rSize; i++)
    {
        for (int j = 0; j < cSize; j++)
        {
            if (arr[i][j] == target){
                cout << "Element found at row " << i << " and at column " << j << " ";
                found = true;
                break;
            }
        }
    }
    if (!found)
    {
        cout << "Not found" << endl;
    }
}

int main()
{
    int arr[3][3] = {{1, 2, 3},{4, 5, 6},{7, 8, 9}};
    int rSize = 3;
    int cSize = 3;
    int target;
    cout << "Enter the element to search : " << " ";
    cin >> target;
    search(arr, rSize, cSize, target);
    return 0;
}