// Problem: Longest subarray with given sum K(positives)
//
// Platform : Striver's A - Z Sheet
//
// Concept Used:
// Two Pointers / Sliding Window
//
// Time Complexity: O(n)
// Space Complexity: O(1)


# include <iostream>
# include <vector>
using namespace std;

int LongestSubarray(vector <int> arr, int k)
{
    int n = arr.size();
    int left = 0;
    int right = 0;
    int sum = 0;
    int maxlength = 0;

    while(right < n)
    {
        sum += arr[right];
        right++;

        while(sum > k)
        {
            sum -= arr[left];
            left++;
        }

        if(sum == k)
        {
            maxlength = max(maxlength, right - left);
        }
    }
    return maxlength;
}

int main()
{
    vector <int> arr = {10, 5, 2, 7, 1, 9};

    int k;
    cout << "Enter the desired sum value : " << " ";
    cin >> k;

    int result = LongestSubarray(arr, k);

    if(result == 0)
    {
        cout << "Not Found";
    }
    else
    {
        cout << "Length is : " << result;
    }
    
    return 0;
}