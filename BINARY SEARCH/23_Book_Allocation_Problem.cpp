/*
Topic      : Binary Search on Answer
Problem    : Book Allocation Problem
Platform   : Striver A2Z Sheet

Approach   : Binary search on the maximum pages allowed per student and greedily allocate contiguous books.
Time       : O(n * log(sum(arr) - max(arr)))
Space      : O(1)
*/

# include <iostream>
# include <vector>
# include <algorithm>
using namespace std;

int Book(vector <int> pages, int m)
{
    int low = *max_element(pages.begin(), pages.end());

    int sum = 0;
    for(int i = 0; i < pages.size(); i++)
    {
        sum += pages[i];
    }
    int high = sum;

    while(low <= high)
    {
        int mid = low + (high - low) / 2;

        int child = 1;
        int currentpages = 0;

        for(int i = 0; i < pages.size(); i++)
        {
            if(currentpages + pages[i] > mid)
            {
                child++;
                currentpages = pages[i];
            }
            else
            {
                currentpages += pages[i];
            }
        }

        if(child <= m)
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
    vector <int> pages = {12, 34, 67, 90};

    int m;
    cout << "Enter number of students : ";
    cin >> m;

    int result = Book(pages, m);
    cout << "Minimum pages assigned to per student is : " << result << " " ;

    return 0;
}