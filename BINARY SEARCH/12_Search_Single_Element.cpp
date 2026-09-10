/* 
Topic : Binary Search 
Problem : Single Element in a Sorted Array 
Platform : LeetCode 540
Approach : Binary Search using Pair Parity 
Time : O(log n) 
Space : O(1) 
*/

# include <iostream>
# include <vector>
using namespace std;

int search(vector <int> arr)
{
    int low = 0;
    int high = arr.size() - 1;

    while(low < high)
    {
        int mid = low + (high - low) / 2;

        if(mid % 2 == 0)
        {
            if(arr[mid] == arr[mid + 1])
            {
                low = mid + 2;
            }
            else
            {
                high = mid;
            }
        }

        else
        {
            if(arr[mid] == arr[mid - 1])
            {
                low = mid + 1;
            }
            else
            {
                high = mid;
            }
        }
    }

    return arr[low];
}

int main()
{
    vector <int> arr = {1, 1, 2, 2, 3, 4, 4, 5, 5};

    int result = search(arr);
    cout << "Single Element is : " << result << " ";

    return 0;
}