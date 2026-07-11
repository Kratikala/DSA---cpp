# include <iostream>
# include <vector>
using namespace std;
int main(){
    vector <vector <int>> arr (5, vector<int> (4, 0));
    int total_rows = arr.size();
    int total_columns = arr[0].size();

    vector <vector <int>> brr(4);
    brr[0] = vector<int> (4);
    brr[1] = vector<int> (2);
    brr[2] = vector<int> (5);
    brr[3] = vector<int> (3);

    int total_rows = brr.size();
    // int total_columns = brr[i].size();
    // i++;
}