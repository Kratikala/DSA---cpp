/*
Topic      : Arrays
Problem    : Majority Element
Platform   : LeetCode 169

Approach   : Boyer-Moore Majority Vote Algorithm
Time       : O(n)
Space      : O(1)
*/


# include <iostream>
# include <vector>
using namespace std;

int Majority(vector <int> arr)
{
    int candidate;
    int n = arr.size();
    int count = 0;

    for(int i = 0; i < n; i++)
    {
        if(count == 0)
        {
            candidate = arr[i];
            count = 1;
        }

        else if(candidate == arr[i])
        {
            count++;
        }
        else
        {
            count--;
        }
    }
    return candidate;
}

int main()
{
    vector <int> arr = {7, 0, 0, 1, 7, 7, 2, 7, 7};

    int result = Majority(arr);
    cout << "Enter Majority Element : " << result << " ";

    return 0;
}