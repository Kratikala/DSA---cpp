// Problem: Largest Element
//
// Objective:
// Find the maximum element present in the array.
//
// Concepts Used:
// - Traversal
// - Comparison
//
// Time Complexity: O(n)
// Space Complexity: O(1)


# include <iostream>
using namespace std;
void largest(int arr[], int size){
    int largest = arr[0];
    for (int i = 1; i < size; i++){
        if (arr[i] > largest){
            largest = arr[i];
        }    
    }
    cout << "Largest is :" << largest << endl;
}
int main(){
    int arr[] = {10, 5, 9, 20, 5, 1};
    int size = 6;
    largest(arr, size);
}