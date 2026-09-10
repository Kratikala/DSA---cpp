/* 
Topic : Binary Search 
Problem : Find Peak Element 
Platform : LeetCode 162

Approach : Binary Search 
Time : O(log n) 
Space : O(1) 
*/

# include <iostream>
# include <vector>
using namespace std;

int peak(vector <int> arr)
{
    int low = 0;
    int high = arr.size() - 1;

    while(low < high)
    {
        int mid = low + (high - low) / 2;

        if(arr[mid] > arr[mid + 1])
        {
            high = mid;
        }
        else
        {
            low = mid + 1;
        }
    }
    return low;
}

int main()
{
    vector <int> arr = {1, 2, 1, 3, 5, 6, 4};

    int result = peak(arr);
    cout << "Peak Element is : " << result << " ";

    return 0;
}
