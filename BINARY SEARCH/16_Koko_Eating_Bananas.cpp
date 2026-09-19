/*
Topic      : Binary Search on Answers
Problem    : Koko Eating Bananas
Platform   : LeetCode 875

Approach   : Binary search on the eating speed. For each speed, calculate the total hours required using ceiling division. If required hours exceed h, increase the speed. Otherwise, try a smaller speed.
Time       : O(n log(max(piles)))
Space      : O(1)
*/

# include <iostream>
# include <vector>
# include <algorithm>
# include <cmath>
using namespace std;

int banana(vector <int> piles, int h)
{
    int low = 1;
    int high = *max_element(piles.begin(), piles.end());

    while(low <= high)
    {
        int mid = low + (high - low) / 2;

        int sum = 0;
        for(int i = 0; i < piles.size(); i++)
        {
            double ans = ceil((double)piles[i] / mid);
            sum += ans;
        }

        if(sum > h)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return low;
}

int main()
{
    vector <int> piles = {3, 6, 7, 11};

    int h;
    cout << "Enter no. of hours : ";
    cin >> h;

    int result = banana(piles,h);
    cout << "Minimum bananas koko can eat is : " << result << " ";
    
    return 0;
}