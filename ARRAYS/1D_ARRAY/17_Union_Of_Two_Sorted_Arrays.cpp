// Problem: Union of Two Sorted Arrays
//
// Platform : Striver's A - Z Sheet
//
// Concept Used:
// Two Pointers
//
// Time Complexity: O(n + m)
// Space Complexity: O(n + m)


#include <iostream>
#include <vector>
using namespace std;

vector<int> Union(vector<int> A, vector<int> B){

    vector<int> uni;

    int i = 0;
    int j = 0;

    while(i < A.size() && j < B.size()){

        // Skip duplicate elements in A
        if(i > 0 && A[i] == A[i - 1]){
            i++;
            continue;
        }

        // Skip duplicate elements in B
        if(j > 0 && B[j] == B[j - 1]){
            j++;
            continue;
        }

        if(A[i] < B[j]){
            uni.push_back(A[i]);
            i++;
        }

        else if(B[j] < A[i]){
            uni.push_back(B[j]);
            j++;
        }

        else{
            uni.push_back(A[i]);
            i++;
            j++;
        }
    }

    // Remaining elements of A
    while(i < A.size()){
        if(i == 0 || A[i] != A[i - 1]){
            uni.push_back(A[i]);
        }
        i++;
    }

    // Remaining elements of B
    while(j < B.size()){
        if(j == 0 || B[j] != B[j - 1]){
            uni.push_back(B[j]);
        }
        j++;
    }

    return uni;
}

int main(){

    vector<int> A = {1, 2, 2, 4, 5};
    vector<int> B = {2, 3, 4, 4, 5};

    vector<int> result = Union(A, B);

    for(int x : result){
        cout << x << " ";
    }

    return 0;
}