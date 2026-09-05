/*
Topic      : Binary Search
Problem    : Lower Bound
Platform   : Striver A2Z / Custom Practice
Approach   : Binary Search
Time       : O(log n)
Space      : O(1)
*/

# include <iostream>
# include <vector>
using namespace std;

int lb(vector <int> arr, int target, int n)
{
    int low = 0;
    int high = arr.size() - 1;
    int ans = n;
        
    while(low <= high)
    {
        int mid = (low + high) / 2;

        if(arr[mid] >= target)
        {
            ans = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return ans;
}

int main()
{
    vector <int> arr = {1, 2, 3, 3, 7, 8, 9, 9, 9, 11, 12};

    int target;
    cout << "Enter Target Value : ";
    cin >> target;

    int n = arr.size();

    int result = lb(arr, target, n);
    cout << "Lower Bound is : " << result << " ";

    return 0;
}