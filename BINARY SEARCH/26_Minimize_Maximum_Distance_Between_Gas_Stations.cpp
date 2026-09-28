/*
Topic      : Binary Search on Answers
Problem    : Minimize Maximum Distance to Gas Stations
Platform   : Striver A2Z / Coding Ninjas

Approach   : Binary search on the possible maximum distance between adjacent gas stations
Time       : O(n * log((maxGap) / epsilon)), where epsilon = 1e-6
Space      : O(1) auxiliary space
*/

# include <iostream>
# include <vector>
# include <algorithm>
using namespace std;

int gas_stations_needed(vector <int> arr, long double distance)
{
    int count = 0;
    for(int i = 1; i < arr.size(); i++)
    {
        int gap = arr[i] - arr[i - 1];
        count += (gap / distance) - 1;
    }
    return count;
}

long double minimise_max_distance(vector <int> arr, int k)
{
    long double low = 0;
    long double high = 0;
    for(int i = 1; i < arr.size(); i++)
    {
        high = max(high, (long double)(arr[i] - arr[ i - 1]));
    }

    while(high - low > 1e-6)
    {
        long double mid = (low + high) / 2;
        int cnt = gas_stations_needed(arr, mid);

        if(cnt > k)
        {
            low = mid;
        }
        else
        {
            high = mid;
        }
    }
    return high;
}

int main()
{
    vector <int> arr = {1, 2, 3, 4, 5};

    int k;
    cout << "Enter number of gas stations to insert : ";
    cin >> k;

    long double result = minimise_max_distance(arr, k);
    cout << "The Distance between gas stations will be : " << result << " ";

    return 0;
}