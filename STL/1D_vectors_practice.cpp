// // 1. Print a Vector

// # include <iostream>
// # include <vector>
// using namespace std;
// int main(){
//     vector <int> v = {10, 20, 30, 40, 50};
//     for( int i : v){
//         cout << i << " ";
//     }
//     return 0;
// }

// // 2. Find Sum of Elements

// # include <iostream>
// # include <vector>
// using namespace std;
// int main(){
//     vector <int> v = {1, 2, 3, 4, 5};
//     int sum = 0;
//     for(int i : v){
//         sum = sum + i;
//     }
//     cout << "SUM : " << sum << " ";
//     return 0;
// }

// // 3. Find Maximum Element

// # include <iostream>
// # include <vector>
// using namespace std;
// int main(){
//     vector <int> v = {9, 1, 4, 10, 7};
//     int largest = v.front();
//     for( int i : v){
//         if( i > largest){
//             largest = i;
//             i++;
//         }
//     }
//     cout << "Maximum Element is : " << largest << " ";
//     return 0;
// }

// // 4. Find Minimum Element

// # include <iostream>
// # include <vector>
// using namespace std;
// int main(){
//     vector <int> v = {9, 1, 4, 10, 7};
//     int smallest = v.front();
//     for( int i : v){
//         if( i < smallest){
//             smallest = i;
//             i++;
//         }
//     }
//     cout << "Minimum Element is : " << smallest << " ";
//     return 0;
// }

// 5. Count Even and Odd Numbers

// Example

// 1 2 3 4 5

// Output

// Even = 2
// Odd = 3
// 6. Reverse a Vector

// Don't use STL reverse().

// 7. Search an Element

// Input

// Vector: 10 20 30 40
// Target = 30

// Output

// Found at index 2
// 🟡 Level 2
// 8. Second Largest Element

// Example

// 1 7 3 9 5

// Output

// 7
// 9. Remove All Even Numbers

// Input

// 1 2 3 4 5 6

// Output

// 1 3 5
// 10. Rotate Vector Left by One
// 1 2 3 4 5

// ↓

// 2 3 4 5 1
// 11. Rotate Right by One
// 1 2 3 4 5

// ↓

// 5 1 2 3 4
// 12. Check if Sorted

// Return

// YES

// or

// NO
