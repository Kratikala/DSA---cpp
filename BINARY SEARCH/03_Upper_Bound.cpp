/*
Topic      : Binary Search
Problem    : Upper Bound
Platform   : Striver A2Z / Custom Practice
Approach   : Binary Search
Time       : O(log n)
Space      : O(1)
*/

# include <iostream>
# include <vector>
using namespace std;

int up(vector <int> arr, int target, int n)
{
    int low = 0;
    int high = arr.size() - 1;
    int ans = n;

    while(low <= high)
    {
        int mid = low + (high - low) / 2;

        if(arr[mid] > target)
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
    vector <int> arr = {2, 3, 6, 7, 8, 8, 11, 11, 12};

    int target;
    cout << "Enter target value : ";
    cin >> target;

    int n = arr.size();

    int result = up(arr, target, n);
    cout << "Upper Bound is : " << result << " ";

    return 0;
}