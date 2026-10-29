/*
Topic: Recursion / Mathematics
Problem: Calculate the sum of the digits of a number.
Platform: Practice

Approach: Recursively sum the digits until one digit remains.
Time Complexity: O(log n)
Auxiliary Space: O(log n) with recursion.
*/

# include <iostream>
using namespace std;

int sum_digit(int num)
{
    if(num >= 0 && num <= 9)
    {
        return num;
    }

    int sum = 0;

    while(num > 0)
    {
        int digit = num % 10;
        sum += digit;
        num = num / 10;
    }
    return sum_digit(sum);
}

int main()
{
    int num;
    cout << "Enter Number : ";
    cin >> num;

    cout << "SUM : " << sum_digit(num) << " ";

    return 0;
}