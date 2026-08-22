/* 
Topic : Arrays 
Problem : Remove Duplicates from Sorted Array 
Platform : LeetCode 26 

Approach : Two Pointers 
Time       : O(n)
Space      : O(1)
*/


# include <iostream>
# include <vector>
using namespace std;

int RemoveDuplicate(vector <int> &arr)
{
    int i = 0;

    for(int j = 1; j < arr.size(); j++)
    {
        if (arr[j] != arr[i])
        {
            i++;
            arr[i] = arr[j];
        }
    }

    return i + 1;
}

int main()
{
    vector <int> arr = {1, 1, 2, 2, 2, 3, 3};

    int k = RemoveDuplicate(arr);

    for(int x = 0; x < k; x++)
    {
        cout << arr[x] << " ";
    }

    return 0;
}