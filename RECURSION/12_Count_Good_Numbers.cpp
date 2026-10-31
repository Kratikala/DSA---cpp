/*
Topic: Recursion / Binary Exponentiation
Problem: Count Good Numbers
Platform: LeetCode 1922

Time Complexity: O(log n)
Auxiliary Space: O(log n), due to the recursive call stack.
*/

# include <iostream>
using namespace std;

const long long MOD = 1e9 + 7;

long long power(int x, long long n)
{
    if(n == 0)
    {
        return 1;
    }

    long long half = power(x, n/2);

    half = (half * half) % MOD;

    if(n % 2 == 1)
    {
        return (x * half) % MOD;
    }

    return half;
}

int countgoodnumbers(long long n)
{
    if(n == 0)
    {
        return 1;
    }

    long long even = (n + 1) / 2;
    long long odd = n / 2;

    long long a = power(5, even);
    long long b = power(4, odd);

    return (a * b) % MOD;
}

int main()
{
    long long n;
    cout << "Enter n : ";
    cin >> n;

    cout << "Number of good numbers are : " << countgoodnumbers(n) << " ";

    return 0;
}