// Problem: Array Initialization
//
// Objective:
// Learn different ways to initialize and access
// elements of a 1D array.
//
// Concepts Used:
// - Array Declaration
// - Initialization
// - Traversal
//
// Time Complexity: O(n)
// Space Complexity: O(1)


# include <iostream>
using namespace std;
void initialize_array(int arr[], int size){
    for (int i = 0; i <= size - 1; i++){
        arr[i] = -1;
    }
    for (int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
}
int main(){
    int arr[10];
    int size = 10;
    initialize_array(arr, size);
    return 0;
}