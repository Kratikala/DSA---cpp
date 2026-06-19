// // Print Address of a Variable

// # include <iostream>
// using namespace std;
// int main(){

//     int num = 10;
//     cout << "Value : " << num << endl;
//     cout << "Address : " << &num << endl;
//     return 0;
// }

// Store Address in a Pointer

# include <iostream>
using namespace std;
int main(){

    int num = 5;
    int *ptr = &num;
    cout << num << endl;
    cout << &num << endl;
    cout << ptr << endl;
    return 0;
}

// 3. Dereference Pointer

// Print

// *ptr
// 4. Modify Variable Using Pointer
// num = 5;

// Change it to

// 100

// using

// *ptr
// 5. Pointer Size

// Print

// sizeof(ptr)
// sizeof(int*)
// sizeof(char*)
// sizeof(double*)

// Observe the output.

// ⭐⭐ Level 2: Pointer Arithmetic
// 6. Pointer Arithmetic on Array
// int arr[5] = {10,20,30,40,50};

// Print

// arr
// arr+1
// arr+2

// Then print

// *(arr)
// *(arr+1)
// *(arr+2)
// 7. Traverse Array Using Pointer

// Without using

// arr[i]

// Print

// 10 20 30 40 50
// 8. Add All Elements Using Pointer

// Array

// int arr[]={1,2,3,4,5};

// Find sum using pointer only.

// 9. Reverse Array Using Pointers

// Don't use indexing.

// Use

// start pointer
// end pointer
// ⭐⭐⭐ Level 3: Character Pointers
// 10. Print String Using Pointer
// Hello

// Print character by character using

// char *ptr
// 11. Find Length Using Pointer

// Don't use

// str.length()

// or indexing.

// 12. Count Vowels Using Pointer

// Use only

// ptr++
// ⭐⭐⭐ Level 4: Functions
// 13. Swap Two Numbers Using Pointers

// Input

// 10
// 20

// Output

// 20
// 10
// 14. Increment Number Using Pointer

// Write

// increment(int *ptr)
// 15. Find Maximum Using Pointer

// Input

// 5 9

// Return maximum.

// ⭐⭐⭐⭐ Level 5: Dynamic Memory
// 16. Dynamic Integer

// Create integer using

// new

// Store

// 50

// Print it.

// Delete memory.

// 17. Dynamic Array

// Take size from user.

// Create

// new int[size];

// Input elements.

// Print elements.

// Delete memory.

// 18. Find Sum of Dynamic Array
// 19. Find Maximum in Dynamic Array
// 20. Reverse Dynamic Array
// ⭐⭐⭐⭐⭐ Level 6 (Most Important)
// 21. Pointer to Pointer

// Print

// num

// &num

// ptr

// &ptr

// *ptr

// **ptr

// Understand every output.

// 22. Predict the Output
// int a = 5;
// int *p = &a;

// cout<<a<<endl;
// cout<<&a<<endl;
// cout<<p<<endl;
// cout<<*p<<endl;

// Don't run it.

// Predict first.

// 23. Predict the Output
// int a=10;

// int *p=&a;

// (*p)++;

// cout<<a;
// 24. Predict the Output
// int arr[]={10,20,30};

// int *p=arr;

// cout<<*p<<endl;

// p++;

// cout<<*p;