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

// // 5. Count Even and Odd Numbers

// # include <iostream>
// # include <vector>
// using namespace std;
// int main(){
//     vector <int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9};
//     int even = 0;
//     int odd = 0;
//     for( int i : v){
//         if( i % 2 == 0){
//             even++;
//         }
//         else{
//             odd++;
//         }
//     }
//     cout << "EVEN : " << even << endl;
//     cout << "ODD : " << odd << endl;
//     return 0;
// }

// // 6. Reverse a Vector

// # include <iostream>
// # include <vector>
// using namespace std;
// int main(){
//     vector <int> v = {1, 2, 3, 4, 5};
//     int start = 0;
//     int end = v.size() - 1;
//     while (start < end){
//         swap(v[start], v[end]);
//         start++;
//         end--;
//     }
//     for( int i : v){
//         cout << i << " ";
//     }
//     return 0;
// }

// // 7. Search an Element

// # include <iostream>
// # include <vector>
// using namespace std;
// int main(){
//     vector <int> v = {10, 20, 30, 40, 50};
//     bool found = false;
//     int target = 30;
//     for( int i = 0; i < v.size(); i++){
//         if (v[i] == target){
//             cout << "Element is at index : " << i << " ";
//             found = true;
//             break;
//         }
//     }
//     if(!found){
//         cout << "Not Found" << endl;
//     }
//     return 0;
// }

// // 8. Second Largest Element

// # include <iostream>
// # include <vector>
// using namespace std;
// int main(){
//     vector <int> v = {5, 9, 1, 4, 8};
//     int largest = v[0];
//     int second_largest = v[1];
//     for( int i = 0; i < v.size(); i++){
//         if (v[i] > largest){
//             second_largest = largest;
//             largest = v[i];
//         }
//         else if( v[i] > second_largest){
//             second_largest = v[i];
//         }
//     }
//     cout << "Second Largest Element is : " << second_largest << " ";
//     return 0;
// }

// // 9. Remove All Even Numbers

// # include <iostream>
// # include <vector>
// using namespace std;
// int main(){
//     vector <int> a = {1, 2, 3, 4, 5, 6, 7};
//     vector <int> b;
//     for(int i = 0; i < a.size(); i++){
//         if( a[i] % 2 != 0){
//             b.push_back(a[i]);
//         }
//     }
//     for( int i : b){
//         cout << i << " ";
//     }
//     return 0;
// }

// // 10. Rotate Vector Left by One

// # include <iostream>
// # include <vector>
// using namespace std;
// int main(){
//     vector <int> v = {1, 2, 3, 4, 5};
//     int temp = v[0];
//     int last = v.size() - 1;
//     for( int i = 0; i < v.size(); i++){
//         v[i] = v[i+1];
//         v[last] = temp;
//     }
//     for( int i : v){
//         cout << i << " ";
//     }
//     return 0;
// }

// 11. Rotate Right by One

# include <iostream>
# include <vector>
using namespace std;
int main(){
    vector <int> v = {1, 2, 3, 4, 5};
    int last = v.size() - 1;
    int first = v[0];
    for(int i = v.size() - 1 ; i > 0; i--){
        v[last] = first;
        v[i] = v[i - 1];

    }
    for(int i : v){
        cout << i << " ";
    }
    return 0;
}

// 12. Check if Sorted

// Return

// YES

// or

// NO
