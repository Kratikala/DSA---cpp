/*
Topic      : Binary Search
Problem    : Find Floor and Ceil in a Sorted Array
Platform   : Striver A2Z / Custom Practice
Approach   : Binary Search
Time       : O(log n)
Space      : O(1)
*/

# include <iostream>
# include <vector>
using namespace std;

pair <int, int> floor_ceil (vector<int> arr, int target, int n)
{
    int low = 0;
    int high = n - 1;

    int floor = -1;
    int ceil = -1;

    while(low <= high)
    {
        int mid = low + (high - low) / 2;

        if(arr[mid] == target)
        {
            floor = arr[mid];
            ceil = arr[mid];
            break;
        }
        else if(arr[mid] < target)
        {
            floor = arr[mid];
            low = mid + 1;
        }
        else
        {
            ceil = arr[mid];
            high = mid - 1;
        }
    }
    return {floor, ceil};
}

int main()
{
    vector <int> arr = {3, 4, 4, 7, 8, 10};

    int target;
    cout << "Enter target value : ";
    cin >> target;

    int n = arr.size();

    pair <int, int> result = floor_ceil(arr, target, n);
    cout << "Floor : " << result.first << endl;
    cout << "Ceil : " << result.second << endl;

    return 0;
}