// Problem: Smallest Element
//
// Objective:
// Find the minimum element present in the array.
//
// Concepts Used:
// - Traversal
// - Comparison
//
// Time Complexity: O(n)
// Space Complexity: O(1)


# include <iostream>
using namespace std;
void smallest(int arr[], int size){
    int smallest = arr[0];
    for (int i = 1; i < size; i++){
        if (arr[i] < smallest){
            smallest = arr[i];
        }
    }
    cout << "Smallest is :" << smallest << " ";
}
int main(){
    int arr[] = {10, 5, 9, 20, 5, 1};
    int size = 6;
    smallest(arr, size);
}