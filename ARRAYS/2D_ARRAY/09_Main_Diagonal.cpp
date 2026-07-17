// Problem: Main Diagonal
//
// Objective:
// Print or process the main diagonal of a matrix.
//
// Concepts Used:
// - Matrix Indexing
//
// Time Complexity: O(n)
// Space Complexity: O(1)


# include <iostream>
using namespace std;

void diagonal( int arr[][3], int rSize, int cSize)
{
    cout << "The diagonal elements are : " << " ";
    for (int i = 0; i < rSize; i++)
    {
        for ( int j = 0; j < cSize; j++)
        {
            if ( i == j )
            {
                cout << arr[i][j] << " ";
            }
        }
    }
}

int main()
{
    int arr[3][3] = {{1, 2, 3},{4, 5, 6},{7, 8, 9}};
    int rSize = 3;
    int cSize = 3;
    diagonal(arr, rSize, cSize);
    return 0;
}


// - - - - - - - - - - - - - - with one loop

 # include <iostream>
using namespace std;

void diagonal( int arr[][3], int rSize)
{
    cout << "The diagonal elements are : " << " ";
    for (int i = 0; i < rSize; i++)
    {
        cout << arr[i][i] << " ";
    }
}

int main()
{
    int arr[3][3] = {{1, 2, 3},{4, 5, 6},{7, 8, 9}};
    int rSize = 3;
    int cSize = 3;
    diagonal(arr, rSize);
    return 0;
}