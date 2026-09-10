/*
Topic      : Binary Search
Problem    : Find out how many times an array has been rotated
Platform   : Coding Ninjas / Practice
Approach   : Binary Search
Time       : O(log n)
Space      : O(1)
*/

# include <iostream>
# include <vector>
using namespace std;

int rotation(vector <int> arr)
{
    int low = 0;
    int high = arr.size() - 1;

    while(low < high)
    {
        int mid = low + (high - low) / 2;

        if(arr[mid] > arr[high])
        {
            low = mid + 1;
        }
        else
        {
            high = mid;
        }
    }
    return low;
}

int main()
{
    vector <int> arr = {4, 5, 6, 7, 0, 1, 2, 3};

    int result = rotation(arr);
    cout << "Number of rotations : " << result << " ";

    return 0;
}
