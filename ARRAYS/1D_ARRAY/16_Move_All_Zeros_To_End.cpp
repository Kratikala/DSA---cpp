/* 
Topic : Arrays 
Problem : Move All Zeros to The End
Platform : LeetCode 289

Approach : Two Pointers
Time       : O(n)
Space      : O(1)
*/

# include <iostream>
# include <vector>
using namespace std;

void MoveZero(vector <int> &arr)
{
    int i = 0;

    for(int j = 0; j < arr.size(); j++)
    {
        if(arr[j] != 0)
        {
            swap(arr[i], arr[j]);
            i++;
        }
    }
}

int main()
{
    vector <int> arr = {1, 0, 2, 3, 0, 4, 0, 1};

    MoveZero(arr);

    for(int x : arr)
    {
        cout << x << " ";
    }

    return 0;
}