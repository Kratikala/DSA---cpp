/*
Topic      : Binary Search on Answer
Problem    : Capacity to Ship Packages Within D Days
Platform   : LeetCode 1011

Approach   : Binary Search on possible ship capacity.
Time       : O(n * log(sum(weights)))
Space      : O(1)
*/

# include <iostream>
# include <vector>
# include <algorithm>
using namespace std;

int capacity(vector <int> weights, int days)
{
    long long sum = 0;
    for(int i = 0; i < weights.size(); i++)
    {
        sum += weights[i];
    }

    int low = *max_element(weights.begin(), weights.end());
    int high = sum;

    while(low <= high)
    {
        int mid = low + (high - low) / 2;

        int currentload = 0;
        int dayspassed = 1;

        for(int i = 0; i < weights.size(); i++)
        {
            if((currentload + weights[i]) > mid)
            {
                dayspassed++;
                currentload = weights[i];
            }
            else
            {
                currentload += weights[i];
            }
        }

        if(dayspassed <= days)
        {
            high = mid - 1;
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
    vector <int> weights = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int days;
    cout << "Enter number of days to ship packages : ";
    cin >> days;

    int result = capacity(weights, days);
    cout << "Minimum capacity to ship packages is : " << result << " ";

    return 0;
}