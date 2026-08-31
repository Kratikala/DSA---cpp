/* 
Topic : Arrays 
Problem : Left Rotate Array
Platform : GFG

Time       : O(n)
Space      : O(1)
*/

# include <iostream>
# include <vector>
using namespace std;

int Rotate(vector <int> &arr)
{
    int temp = arr[0];
    int last = arr.size() - 1;

    for(int i = 0; i < arr.size() - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    arr[last] = temp;

}

int main()
{
    vector <int> arr = {1, 2, 3, 4, 5};

    Rotate(arr);

    for(int x = 0; x < arr.size(); x++)
    {
        cout << arr[x] << " ";
    }
    
    return 0;
}