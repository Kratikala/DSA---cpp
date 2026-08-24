/*
Topic      : Arrays
Problem    : Number That Appears Once
Platform   : LeetCode 136

Approach   : XOR
Time       : O(n)
Space      : O(1)
*/


# include <iostream>
# include <vector>
using namespace std;

int Once(vector <int> arr)
{
    int n = arr.size();

    int XOR = 0;

    for(int i = 0; i < n; i++)
    {
        XOR = XOR ^ arr[i];
    }
    return XOR;
}

int main()
{
    vector <int> arr = {1, 2, 3, 2, 1};

    int result = Once(arr);
    cout << "Number that appears once is : " << result << " ";

    return 0;
}