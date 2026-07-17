// Problem: Saddle Point
//
// Objective:
// Find the saddle point of a matrix.
//
// Concepts Used:
// - Row Minimum
// - Column Maximum
// - Matrix Traversal
//
// Time Complexity: O(n²)
// Space Complexity: O(1)


# include <iostream>
using namespace std;

void saddle(int arr[][3], int rsize, int csize)
{
    bool found = false;
    for ( int i = 0; i < rsize; i++)
    {
        int smallest = arr[i][0];
        int columnno = 0;       
        for ( int j = 1; j < csize; j++)
        {
            if (arr[i][j] < smallest)
            {
                smallest = arr[i][j];
                columnno = j;
            }    
        }
        int largest = arr[0][columnno];
            for(int k = 0; k < rsize; k++)
            {
                if (arr[k][columnno] > largest)
                {
                    largest = arr[k][columnno];
                }
            } 
            if (smallest == largest)
            {
                cout << "Saddle Point : " << smallest << " ";
                found = true;
            }
    }
    if (!found)
    {
        cout << "No saddle point" << " ";
    }
}

int main()
{
    int arr[3][3] = {{1, 2, 3},{4, 5, 6},{7, 8, 9}};
    int rSize = 3;
    int cSize = 3;
    saddle(arr, rSize, cSize);
    return 0;
}