/*
Topic      : Arrays
Problem    : Rearrange Array Elements by Sign
Platform   : LeetCode 2149

Approach   : Two Pointers / Separate Positive and Negative Positions
Time       : O(n)
Space      : O(n)
*/

# include <iostream>
# include <vector>
using namespace std;

vector <int> Rearrange(vector <int> arr)
{
    vector <int> result(arr.size());

    int pos = 0;
    int neg = 1;

    for(int i = 0; i < arr.size(); i++)
    {
        if(arr[i] > 0)
        {
            result[pos] = arr[i];
            pos +=2;
        }
        else
        {
            result[neg] = arr[i];
            neg += 2;
        }
    }

    return result;
}

int main()
{
    vector <int> arr = {1, 2, 3, -1, -2, -3};

    vector <int> result = Rearrange(arr);

    for(int x : result)
    {
        cout << x << " ";
    }

    return 0; 
}