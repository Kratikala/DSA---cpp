/* 
Topic : Binary Search 
Problem : Square Root of a Number 

Approach : Binary Search on Answer 
Time : O(log n) 
Space : O(1) 
*/

# include <iostream>
# include <vector>
using namespace std;

int sqrt(int n)
{
    int low = 1;
    int high = n;
    int ans = 0;

    while(low <= high)
    {
        int mid = low + (high - low) / 2;

        if((mid * mid) <= n)
        {
            ans = mid;
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return ans;
}

int main()
{

    int n;
    
    cout << "Enter the root : ";
    cin >> n;

    int result = sqrt(n);
    cout << "Square Root is : " << result << " ";
    
    return 0;
}