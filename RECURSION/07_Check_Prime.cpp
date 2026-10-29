/*
Topic: Mathematics / Recursion
Problem: Determine whether a number is prime.
Platform: Practice

Approach: Recursively check for divisors up to sqrt(n).
Time Complexity: O(sqrt(n))
Auxiliary Space: O(sqrt(n)) with recursion.
*/

# include <iostream>
using namespace std;

bool isPrime(int n, int i)
{
    if(n <= 1)
    {
        return false;
    }

    if(i == n)
    {
        return true;
    }

    if (n % i == 0)
    {
        return false;
    }

    return isPrime(n, i + 1);
}

int main()
{
    int n;
    cout << "Enter Number : " << " ";
    cin >> n;

    if(isPrime(n, 2))
    {
        cout << "Number is Prime";
    }
    else
    {
        cout << "Number is not Prime";
    }

    return 0;
}