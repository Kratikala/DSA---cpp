/*
Topic      : Binary Search on Answer
Problem    : Painter's Partition Problem
Platform   : Striver A/Z Sheet

Approach   : Binary search on the maximum time allowed for one painter.
Time       : O(n * log(sum(C) * B))
Space      : O(1)
*/

# include <iostream>
# include <vector>
# include <algorithm>
using namespace std;

int painterPartition(int A, int B, vector <int> C)
{
    int low = *max_element(C.begin(), C.end()) * B;

    int sum = 0;
    for(int i = 0; i < C.size(); i++)
    {
        sum += C[i];
    }

    int high = sum * B;

    while(low <= high)
    {
        int mid = low + (high - low) / 2;

        int current_time = 0;
        int painter = 1;

        for(int i = 0; i < C.size(); i++)
        {
            int boardtime = C[i] * B;
            
            if(current_time + boardtime > mid)
            {
                painter++;
                current_time = boardtime;
            }
            else
            {
                current_time += boardtime;
            }
        }
        if(painter <= A)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return low;
}

int main()
{
    vector <int> C = {1, 10};

    int A;
    cout << "Enter no. of painters : ";
    cin >> A;

    int B;
    cout << "Enter time to paint 1 unit of board : ";
    cin >> B;

    int result = painterPartition(A, B, C);
    cout << "Minimum time to paint the board is : " << result << " ";

    return 0;
}