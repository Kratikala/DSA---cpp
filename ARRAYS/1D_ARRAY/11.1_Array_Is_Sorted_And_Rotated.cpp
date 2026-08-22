/*
Topic      : Arrays
Problem    : Check if Array Is Sorted and Rotated
Platform   : LeetCode 1752

Approach   : Count decreasing pairs in circular array
Time       : O(n)
Space      : O(1)
*/

#include <iostream>
using namespace std;

bool Sorted_Rotated(int arr[], int n)
{
    int count = 0;

    for(int i = 0; i < n; i++)
    {
        if(arr[i] > arr[(i + 1) % n])
        {
            count++;
        }
    }

    return count <= 1;
}

int main()
{
    int arr[4] = {2, 1, 3, 4};
    int n = 4;

    if(Sorted_Rotated(arr, n))
    {
        cout << "Array is Sorted and Rotated";
    }
    else
    {
        cout << "Array is not Sorted and Rotated";
    }

    return 0;
}