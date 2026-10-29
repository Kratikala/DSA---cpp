/*
Topic: Recursion / Binary Exponentiation
Problem: Calculate x raised to the power n.
Platform: LeetCode 50

Approach: Use binary exponentiation to halve the exponent.
Time Complexity: O(log |n|)
Auxiliary Space: O(log |n|) with recursion.
*/

# include <iostream>
# include <iomanip>
using namespace std;

double Power(double x, int n)
{
    if(n == 0)
    {
        return 1;
    }

    if (n < 0)
    {
        return 1/ Power(x, -n);
    }

    return x * Power(x , n - 1);
}

int main()
{
    double x;
    cout << "Enter X : ";
    cin >> x;

    int n;
    cout << "Enter power : ";
    cin >> n;

    cout << "Power is : " << fixed << setprecision(6) << Power(x, n);
    
    return 0;
}
