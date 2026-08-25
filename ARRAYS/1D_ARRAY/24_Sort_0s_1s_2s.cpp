/*
Topic      : Arrays
Problem    : Sort Colors
Platform   : LeetCode 75

Approach   : Dutch National Flag Algorithm
Time       : O(n)
Space      : O(1)
*/


# include <iostream>
# include <vector>
using namespace std;

vector <int> Sort_012 (vector <int> &arr)
{
    int low = 0;
    int mid = 0;
    int high = arr.size() - 1;

    while(mid <= high)
    {
        if(arr[mid] == 0)
        {
            swap(arr[mid], arr[low]);
            low++;
            mid++;
        }
        else if(arr[mid] == 1)
        {
            mid++;
        }
        else
        {
            swap(arr[mid], arr[high]);
            high--;
        }
    }
    
    return arr;
}

int main()
{
    vector <int> arr = {1, 0, 2, 1, 0};

    vector <int> result = Sort_012(arr);

    for(int x : result)
    {
        cout << x << " " ;
    }

    return 0;
}
