/* 
Topic : Binary Search 
Problem : Kth Missing Positive Number 
Platform : LeetCode 1539 

Approach : Binary search on the array indices
Time : O(log n) 
Space : O(1) 
*/

# include <iostream>
# include <vector>
using namespace std;

int missing(vector <int> &arr, int k)
{
    int low = 0;
    int high = arr.size() - 1;

    while(low <= high)
    {
        int mid = low + (high - low) / 2;
        int missing = arr[mid] - (mid + 1);

        if(missing < k)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return low + k;
}

int main()
{
    vector <int> arr = {2, 3, 4, 7, 11};

    int k;
    cout << "Enter missing value to insert : ";
    cin >> k;

    int result = missing(arr, k);
    cout << "Missing Number is : " << result << " ";

    return 0;
}