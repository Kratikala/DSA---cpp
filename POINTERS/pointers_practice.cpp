// // Print Address of a Variable

// # include <iostream>
// using namespace std;
// int main(){

//     int num = 10;
//     cout << "Value : " << num << endl;
//     cout << "Address : " << &num << endl;
//     return 0;
// }

// // Store Address in a Pointer

// # include <iostream>
// using namespace std;
// int main(){

//     int num = 5;
//     int *ptr = &num;
//     cout << num << endl;
//     cout << &num << endl;
//     cout << ptr << endl;
//     return 0;
// }

// // Dereference Pointer

// # include <iostream>
// using namespace std;
// int main(){
//      int num = 10;
//      int *ptr = &num;
//      cout << ptr << endl;   // Address of num
//      cout << &ptr << endl;     // Address of the ptr in which the address is stored
//      cout << *ptr << endl;     
//      return 0;
// }

// // Modify Variable Using Pointer

// # include <iostream>
// using namespace std;
// int main(){
//     int num = 5;
//     int *ptr = &num;
//     *ptr = 100;  // Go to the address stored in ptr.
//     cout << num;
// }

// // Pointer Size

// # include <iostream>
// using namespace std;
// int main(){
//     int num = 10;
//     int *ptr = &num;
//     cout << sizeof(num) << endl;
//     cout << sizeof(ptr) << endl;
//     cout << sizeof(*ptr) << endl;
//     return 0;
// }

// // Pointer Arithmetic on Array

// # include <iostream>
// using namespace std;
// int main(){
//     int arr[5] = {10, 20, 30, 40, 50};

//     cout << "arr : " << arr << endl;   // prints the address of the first element
//     cout << "arr + 1 : " << arr + 1 << endl;    // address oof second element
//     cout << "arr + 2 : " << arr + 2 << endl;
//     cout << "*(arr) : " << *arr << endl;     // element stored at address 
//     cout << "*(arr + 1) : " << *arr + 1 << endl;
//     cout << "*(arr + 2) : " << *arr + 2 << endl;
//     return 0;

// }

// // Traverse Array Using Pointer

// # include <iostream>
// using namespace std;
// int main(){
//     int arr[5] = {10, 20, 30, 40, 50};
//     int *ptr = arr;
//     int i = 0;
//     while (i < 5){
//         cout << *ptr << " ";
//         ptr ++;
//         i ++;
//     }
//     return 0;
// }

// // Add All Elements Using Pointer

// # include <iostream>
// using namespace std;
// int main(){
//     int arr[5] = {1, 2, 3, 4, 5};
//     int *ptr = arr;
//     int i = 0;
//     int sum = 0;
//     while (i < 5){
//         sum = sum + *ptr;
//         ptr ++;
//         i ++;
//     }
//     cout << "Sum is : " << sum;
//     return 0;
// }

// // Reverse Array Using Pointers

// # include <iostream>
// using namespace std;
// int main(){
//     int arr[5] = {1, 2, 3, 4, 5};
//     int *ptr = arr;
//     int *end = arr + 4;
//     while (ptr < end){
//         swap(*ptr, *end);
//         ptr++;
//         end--;
//     }
//     for (int *ptr = arr; ptr < arr + 5; ptr++) {
//         cout << *ptr << " ";
//     }
//     return 0;
// }

// // Print String Using Pointer

// # include <iostream>
// using namespace std;
// int main(){
//     char str[] = "Hello";
//     char *ptr = str;
//     cout << ptr << " ";
//     return 0;
// }

// // Find Length Using Pointer

// # include <iostream>
// using namespace std;
// int main(){
//     char str[] = "Kratika";
//     char *ptr = str;
//     int count = 0;
//     while(*ptr != '\0' ){
//         count++;
//         ptr++;
//     }
//     cout << "Length : " << count << " ";
//     return 0;
// }

// // Count Vowels Using Pointer

// # include <iostream>
// using namespace std;
// int main(){
//     char str[] = "Kratika";
//     char *ptr = str;
//     int vowel = 0;
//     while (*ptr != '\0'){
//          if (*ptr == 'a' || *ptr == 'e' || *ptr == 'i' || *ptr == 'o' || *ptr == 'u' || *ptr == 'A' || *ptr == 'E' || *ptr == 'I' || *ptr == 'O' || *ptr == 'U'){
//             vowel++;
//         }
//         ptr++;
//     }
//     cout << "Vowels : " << vowel << " ";   
// }

// // Swap Two Numbers Using Pointers

// # include <iostream>
// using namespace std;
// int main(){
//     int num1 = 10;
//     int num2 = 20;
//     int *p1 = &num1;
//     int *p2 = &num2;
//     int temp = *p1;
//     *p1 = *p2;
//     *p2 = temp;
//     cout << num1 << endl;
//     cout << num2 << endl;
// }

// // Increment Number Using Pointer

// # include <iostream>
// using namespace std;
// int main(){
//     int num = 10;
//     int *ptr = &num;
//     (*ptr)++;
//     cout << num;
// }

// // Find Maximum Using Pointer

// # include <iostream>
// using namespace std;
// int main(){
//     int a = 30;
//     int b = 20;
//     int *p1 = &a;
//     int *p2 = &b;
//     if (*p1 > *p2){
//         cout << *p1;
//     }
//     else{
//         cout << *p2;
//     }
// }

// // Dynamic Integer
// // Create integer using
// // new
// // Store
// // 50
// // Print it.
// // Delete Memory

// # include <iostream>
// using namespace std;
// int main(){
//     int *ptr = new int;
//     *ptr = 50;
//     cout << *ptr;

//     delete ptr;
//     return 0;
// }

// Dynamic Array
// Take size from user.
// Create
// new int[size];
// Input elements.
// Print elements.
// Delete memory.

#include <iostream>
using namespace std;
int main() {
    int size;
    cout << "Size is : " ;
    cin >> size;
    int *ptr = new int[size];
    // input elements
    for (int i = 0; i < size; i++){
        cin >> ptr[i];
    }
    // print elements
    for (int i = 0; i < size; i++) {
        cout << ptr[i] << " ";
    }
    // free memory
    delete[] ptr;
    return 0;
}

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