// Problem: Count Even & Odd Elements
//
// Objective:
// Count the number of even and odd elements
// in the array.
//
// Concepts Used:
// - Modulus Operator
// - Traversal
//
// Time Complexity: O(n)
// Space Complexity: O(1)


# include <iostream>
using namespace std;

void even_odd( int arr[], int size)
{
    int count_even = 0;
    int count_odd = 0;
    for( int i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
        {
            count_even ++;
        }
        else
        {
            count_odd++;
        }
    }
    cout << "Even :" << count_even << endl << "Odd :" << count_odd << endl;
}

int main()
{
    int arr[6] = {2, 3, 4, 5, 6, 7};
    int size = 6;
    even_odd(arr, size);
    return 0;
}