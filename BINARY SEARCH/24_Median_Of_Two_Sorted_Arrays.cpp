/*
Topic      : Binary Search
Problem    : Median of Two Sorted Arrays
Platform   : LeetCode 4

Approach   : Binary search on the smaller array to find a partition where all left-side elements are <= all right-side elements.
Time       : O(log(min(m, n)))
Space      : O(1)
*/

# include <iostream>
# include <vector>
# include <climits>
using namespace std;

double median(vector <int> A, vector <int> B)
{
    int n1 = A.size();
    int n2 = B.size();
    if(n1 > n2)
    {
        return median(B, A);
    }

    int low = 0;
    int high = n1;
    int total = n1 + n2;
    int leftelement = (n1 + n2 + 1) / 2;
    double median = 0;
    int l1;
    int l2;
    int r1;
    int r2;

    while(low <= high)
    {
        int mid1 = (low + high) / 2;
        int mid2 = leftelement - mid1;

        if(mid1 == 0)
        {
            l1 = INT_MIN;
        }
        else
        {
            l1 = A[mid1 - 1];
        }

        if(mid1 == n1)
        {
            r1 = INT_MAX;
        }
        else
        {
            r1 = A[mid1];
        }

        if(mid2 == 0)
        {
            l2 = INT_MIN;
        }
        else
        {
            l2 = B[mid2 - 1];
        }

        if(mid2 == n2)
        {
            r2 = INT_MAX;
        }
        else
        {
            r2 = B[mid2];
        }

        if(l1 <= r2 && l2 <= r1)
        {
            if(total % 2 == 0)
            {
                median = (max(l1, l2) + min(r1, r2)) / 2.0;
            }
            else
            {
                median = max(l1,l2);
            }
            return median;
        }
        
        else if(l1 > r2)
        {
            high = mid1 - 1;
        }

        else
        {
            low = mid1 + 1;
        }
    }
    return median;
}

int main()
{
    vector <int> A = {1, 3, 4, 7, 10, 12};
    vector <int> B = {2, 3, 6, 15};

    double result = median(A, B);
    cout << "Median is : " << result << " ";

    return 0;
}

