/*
Topic      : Arrays
Problem    : Next Permutation
Platform   : LeetCode 31

Approach   : Breakpoint + Swap + Reverse
Time       : O(n)
Space      : O(1)
*/

# include <iostream>
# include <vector>
using namespace std;

void Reverse(vector <int> &arr, int start, int end)
{
    while(start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
    
vector <int> Permutation(vector <int> &arr)
{
    int end = arr.size() - 1;
    int right = arr.size() - 1;
    int breakpoint = -1;

    while(end > 0)
    {
        if (arr[end - 1] < arr[end])
        {
            breakpoint = end - 1;
            break;
        }
        end --;
    }
    
    if(breakpoint == -1)
    {
        Reverse(arr, 0, arr.size() - 1);
        return arr;
    }
    
    while(right >= 0)
    {
        if(arr[right] > arr[breakpoint])
        {
            swap(arr[right], arr[breakpoint]);
            break;
        }     
        right --;
    }
        
    Reverse(arr, breakpoint + 1, arr.size() - 1);
    return arr ;
}

int main()
{
    vector <int> arr = {1, 2, 3, 6, 5, 4};

    vector <int> result = Permutation(arr);

    for(int x : result)
    {
        cout << x << " ";
    }
    return 0;
}