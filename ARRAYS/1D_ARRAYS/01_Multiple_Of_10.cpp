// Problem: Check Multiple of 10
//
// Objective:
// Determine whether a given number is a multiple of 10.
//
// Concepts Used:
// - Modulus Operator (%)
// - Conditional Statements (if-else)
//
// Time Complexity: O(1)
// Space Complexity: O(1)


# include <iostream>
using namespace std;
int multiple_of_10(int arr[], int size){
    int count = 1;
    for (int index = 0; index <= 9; index++){
        arr[index] = count * 10;
        count ++;
    }
    
    for(int index = 0; index < size; index++){
        cout << arr[index] << " ";
    }
    cout << endl; 
}
int main(){
    int arr[10];
    int size = 10;
    multiple_of_10(arr, size);
    return 0;
}