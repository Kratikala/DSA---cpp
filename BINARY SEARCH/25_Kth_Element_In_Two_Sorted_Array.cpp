/*
Topic      : Binary Search on Answers
Problem    : K-th Element of Two Sorted Arrays
Platform   : Coding Ninjas / Striver

Approach   : Binary search on the partition of the smaller array. We place exactly k elements on the left side, so mid2 = k - mid1. The valid partition satisfies L1 <= R2 && L2 <= R1. The k-th element is max(L1, L2).
Time       : O(log(min(n1, n2)))
Space      : O(1)
*/

# include <iostream>
# include <vector>
# include <climits>
using namespace std;

int Kth_element(vector <int> A, vector <int> B, int k)
{
    int n1 = A.size();
    int n2 = B.size();
    if(n1 > n2)
    {
        return Kth_element(B, A, k);
    }

    int low = max(0, k - n2);
    int high = min(n1, k);
    int leftelement = k;
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
             return max(l1, l2);
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
}

int main()
{
    vector <int> A = {2, 3, 6, 7, 9};
    vector <int> B = {1, 4, 8 ,10};

    int k;
    cout << "Enter element position : ";
    cin >> k;

    int result = Kth_element(A, B, k);
    cout << "Element is : " << result << " ";

    return 0;
}