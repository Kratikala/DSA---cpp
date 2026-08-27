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

int Buy_Sell(vector <int> prices)
{
    int minprice = prices[0];
    int maxprofit = 0;

    for(int i = 1; i < prices.size(); i++)
    {
        minprice = min(minprice, prices[i]);

        int profit = prices[i] - minprice;

        maxprofit = max(maxprofit, profit);
    }

    return maxprofit;
}

int main()
{
    vector <int> prices = {7, 1, 5, 3, 6, 4};

    int result = Buy_Sell(prices);
    cout << "Maximum Profit : " << result << " ";

    return 0;
}