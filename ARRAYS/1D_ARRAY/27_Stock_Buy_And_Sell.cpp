/*
Topic      : Arrays
Problem    : Best Time to Buy and Sell Stock
Platform   : LeetCode 121

Approach   : Minimum Price + Maximum Profit
Time       : O(n)
Space      : O(1)
*/


# include <iostream>
# include <vector>
using namespace std;

int Buy_Sell(vector <int> arr)
{
    int minprice = arr[0];
    int maxprofit = 0;

    for(int i = 1; i < arr.size(); i++)
    {
        minprice = min(minprice, arr[i]);

        int profit = arr[i] - minprice;

        maxprofit = max(maxprofit, profit);
    }

    return maxprofit;
}

int main()
{
    vector <int> arr = {7, 1, 5, 3, 6, 4};

    int result = Buy_Sell(arr);
    cout << "Maximum Profit : " << result << " ";

    return 0;
}