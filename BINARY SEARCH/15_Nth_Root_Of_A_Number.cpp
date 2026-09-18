/*
Topic      : Binary Search on Answers
Problem    : Nth Root of a Number
Platform   : Practice / Striver A2Z

Approach   : Binary Search on possible root
Time       : O(log(m) * n)
Space      : O(1)
*/

# include <iostream>
# include <vector>
using namespace std;

int power(int mid, int n)
{
    int result = 1;

    for(int i = 1; i <= n; i++)
    {
        result *= mid;
    }
    return result;
}

int nth_root(int n, int m)
{
    int low = 0;
    int high = m;

    while(low <= high)
    {
        int mid = low + (high - low) / 2;

        long long answer = power(mid, n);

        if(answer == m)
        {
            return mid;
        }

        else if(answer > m)
        {
            high = mid - 1;
        }

        else
        {
            low = mid + 1;
        }
    }

    return -1;
}

int main()
{
    int n;
    cout << "Enter n : ";
    cin >> n;

    int m;
    cout << "Enter m : ";
    cin >> m;

    cout << nth_root(n, m);

    return 0;
}