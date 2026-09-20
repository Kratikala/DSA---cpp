/* 
Topic : Binary Search on Answer 
Problem : Minimum Number of Days to Make m Bouquets 
Platform : LeetCode 1482 

Approach : Binary Search on Answer + Greedy 
Time : O(n log(maxBloomDay - minBloomDay)) 
Space : O(1) 
*/

# include <iostream>
# include <vector>
# include <algorithm>
using namespace std;

int m_bouquets(vector <int> bloomdays, int bouquets, int k)
{
    int low = *min_element(bloomdays.begin(), bloomdays.end());
    int high = *max_element(bloomdays.begin(), bloomdays.end());

    if(1LL * bouquets * k > bloomdays.size())
    {
        return -1;
    }

    while(low  <= high)
    {
        int mid = low + (high - low) / 2;

        int consecutive = 0;
        int bouquetcount = 0;

        for(int i = 0; i < bloomdays.size(); i++)
        {
            if(bloomdays[i] <= mid)
            {
                consecutive++;
                
                if (consecutive == k)
                {
                    bouquetcount++;
                    consecutive = 0;
                }
            }
            else
            {
                consecutive = 0;
            }
        }
        
        if(bouquetcount >= bouquets)
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
    vector <int> bloomdays = {1, 10, 3, 10, 2};

    int bouquets;
    cout << "Enter Total Bouquets : ";
    cin >> bouquets;

    int k;
    cout << "Number of flowers in each bouquet : ";
    cin >> k;

    int answer = m_bouquets(bloomdays, bouquets, k);
    cout << "Minimum days to make m bouquet is : " << answer << " ";

    return 0;
}
