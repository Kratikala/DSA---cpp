// // 1. Insert and Print 
// // Roll -> Marks

// // 101 -> 80

// // 102 -> 90

// // 103 -> 75

// // Print all.

// # include <iostream>
// # include <map>
// using namespace std;
// int main(){
//     map <int, int> m;
//     m[101] = 80;
//     m[102] = 90;
//     m[103] = 75;

//     map <int, int> :: iterator it = m.begin();
//     while(it != m.end()){
//         cout << it -> first << " -> " << it -> second << endl;
//         it++;
//     }
//     return 0;
// }

// // 2. Search a Key 

// // Input

// // 101

// // Output

// // 80

// # include <iostream>
// # include <map>
// using namespace std;
// int main(){
//     map <int, int> mp;
//     mp[101] = 80;
//     mp[102] = 90;
//     mp[103] = 75;

//     int key;
//     cout << "KEY : " << " ";
//     cin >> key;

//     if(mp.find(key) != mp.end()){
//         cout << "KEY FOUND" << endl;
//         cout << mp[key] << endl;
//     }
//     else{
//         cout << "KEY NOT FOUND";
//     }
//     return 0;
// }

// // 3. Update Value 

// # include <iostream>
// # include <map>
// using namespace std;
// int main(){
//     map <int, int> mp;
//     mp[101] = 80;
//     mp[102] = 90;
//     mp[103] = 75;
//     mp[101] = 95;

//     map <int, int> :: iterator it = mp.begin();
//     while (it != mp.end()){
//         cout << it->first << " -> " << it->second << endl;
//         it++;
//     }
//     return 0;
// }

// // 4. Count Frequency of Numbers 

// # include <iostream>
// # include <map>
// using namespace std;
// int main(){
//     map <int, int> mp;
//     int n;
//     cout << "Enter number of elements : " << " ";
//     cin >> n;
//     for(int i = 0; i < n; i++){
//         int x;
//         cin >> x;
//         mp[x]++;
//     }
//     cout << "Frequency of elements:\n";
    
//     for(auto i : mp){
//         cout << i.first << " -> " << i.second << endl;
//     }
//     return 0;
// }

// // 5. Count Frequency of Characters 

// # include <iostream>
// # include <map>
// # include <string>
// using namespace std;
// int main(){
//     map <char, int> mp;
//     int s;
//     cout << "Enter number of characters : " << " ";
//     cin >> s;
//     for (char i = 0; i < s; i++){
//         char x;
//         cin >> x;
//         mp[x]++;
//     }
//     cout << "Frequency of elements:\n";

//     for(auto i : mp){
//         cout << i.first << " -> " << i.second << endl;
//     }
//     return 0;
// }

// 6. Find Maximum Frequency Element 

// Input

// 1 2 2 3 3 3 4

// Output

// 3
// 7. Print Keys Only

// Output

// 101

// 102

// 103
// 8. Print Values Only

// Output

// 80

// 90

// 75
// 9. Sum of Values
// 101 -> 80

// 102 -> 90

// 103 -> 75

// Output

// 245
// 10. Check if Key Exists

// Output

// YES

// NO
// 11. Student Database ⭐⭐⭐

// Store

// Name → Marks

// Search any student.

// 12. Word Frequency ⭐⭐⭐⭐

// Input

// apple mango apple banana mango apple

// Output

// apple -> 3

// banana -> 1

// mango -> 2

// This is one of the most common interview questions.


// Find the first non-repeating character in a string.
// Find the first repeating element in an array.
// Check if two strings are anagrams using a map.
// Find the top K frequent elements using a map + priority queue.
// Sort students by marks using a map