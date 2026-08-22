/* 
Topic : Arrays 
Problem : Remove Duplicates from Sorted Array 
Platform : LeetCode 189 

Approach : Reverse
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

void RotateRight(vector <int> &arr, int k)
{
    int n = arr.size();

    k = k % n;   // for larger values

    Reverse(arr, 0, n - 1);
    Reverse(arr, 0, k - 1);
    Reverse(arr, k, n - 1);
}

int main()
{
    vector <int> arr = {1, 2, 3, 4, 5, 6, 7};

    int k;
    cout << "Values to rotate : " << " ";
    cin >> k;

    
    RotateRight(arr, k);

    for(int x = 0; x < arr.size(); x++)
    {
        cout << arr[x] << " " ;
    }

    return 0;
}