/*
Topic      : Arrays
Problem    : Leaders in an Array
Platform   : GeeksforGeeks

Approach   : Traverse from Right + Track Maximum
Time       : O(n)
Space      : O(n)
*/

# include <iostream>
# include <vector>
using namespace std;

vector <int> Leaders(vector <int> &arr)
{
    vector <int> leaders;
    
    int right = arr.size() - 2;
    int maxi = arr[arr.size() - 1];
    
    leaders.push_back(arr[arr.size() - 1]);

    while(right >= 0)
    {
        if(arr[right] > maxi)
        {
            leaders.push_back(arr[right]);
            maxi = arr[right];
        }
        right--;
    }
    return leaders;
}

int main()
{
    vector <int> arr = {4, 7, 1, 0};

    vector <int> result = Leaders(arr);

    for(int x : result)
    {
        cout << x << " ";
    }
    return 0;
}