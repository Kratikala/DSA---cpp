/*
Topic      : Binary Search on Answer
Problem    : Aggressive Cows
Platform   : Striver A2Z Sheet

Approach   : Binary search on the minimum distance and greedily place cows as far apart as possible.
Time       : O(n log n + n log(max-min))
Space      : O(1)
*/

# include <iostream>
# include <vector>
# include <algorithm>
using namespace std;

int Cows(vector <int> arr, int k)
{
    sort(arr.begin(), arr.end());

    int low = 1;
    int high = *max_element(arr.begin(), arr.end()) - *min_element(arr.begin(), arr.end());

    while(low <= high)
    {
        int mid = low + (high - low) / 2;

        int cow = 1;
        int lastposition = arr[0];

        for(int i = 1; i < arr.size(); i++)
        {
            int remaining = arr[i] - lastposition;

            if(remaining >= mid)
            {
                cow++;
                lastposition = arr[i];
            }
        }

        if(cow >= k)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return high;
}

int main()
{
    vector <int> arr = {0, 3, 4, 7, 10, 9};

    int k;
    cout << "Enter number of cows : ";
    cin >> k;

    int result = Cows(arr, k);
    cout << "Enter the distance between cows : " << result << " ";

    return 0;
}