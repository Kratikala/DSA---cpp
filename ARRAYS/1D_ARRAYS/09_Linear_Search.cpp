// Problem: Linear Search
//
// Objective:
// Search for a target element by traversing
// the array sequentially.
//
// Concepts Used:
// - Traversal
// - Linear Search
//
// Time Complexity: O(n)
// Space Complexity: O(1)


# include <iostream>
using namespace std;
int linear_search( int arr[], int size){
    int search = 30;
    bool found = false;
    for ( int index = 0; index < size; index++){
        if (arr[index] == search){
            cout << "The element is at index : " << index << endl;
            found = true;
            break;
        }           
    }
    if (!found){
            cout << "Not Found" << endl;
        }   
}
int main(){
    int arr[5] = {10, 20, 30, 40, 50};
    int size = 5;
    linear_search(arr, size);
    return 0;
}