// // Print a String

// # include <iostream>
// # include <string>
// using namespace std;
// int main(){
//     string name = "Kratika";
//     cout << name;
//     return 0;
// }

// // Find Length 

// # include <iostream>
// # include <string>
// using namespace std;
// int length(string name){
//     int count = 0;
//     while(name[count] != '\0'){
//         count++;
//     }
//     cout << "Length : " << count << " ";
// }
// int main(){
//     string name = "Kratika";
//     length(name);
//     return 0;
// }

// // Count Vowels

// # include <iostream>
// # include <string>
// using namespace std;
// int vowels(string word){
//     int vowel = 0;
//     for(int i = 0; word[i] != '\0'; i++){
//         if (word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u' || word[i] == 'A' || word[i] == 'E' || word[i] == 'O' || word[i] == 'I' || word[i] == 'U'){
//             vowel++;
//         }
//     }
//     cout << "Number of vowels are : " << vowel;
// }
// int main(){
//     string word = "Programming";
//     vowels(word);
//     return 0;
// }

// // 4. Count Uppercase, Lowercase and Digits

// # include <iostream>
// # include <string>
// using namespace std;
// int uld(string word){
//     int uppercase = 0;
//     int lowercase = 0;
//     int digits = 0;
//     int special = 0;
//     for(int i = 0; word[i] != '\0'; i++){
//         if (word[i] >= 'a' && word[i] <= 'z'){
//             lowercase++;
//         }
//         else if (word[i] >= 'A' && word[i] <= 'Z'){
//             uppercase++;
//         }
//         else if (word[i] >= 0 && word[i] <= '9'){
//             digits++;
//         }
//         else{
//             special++;
//         }
//     }
//     cout << "Uppercase : " << uppercase << endl;
//     cout << "Lowercase : " << lowercase << endl;
//     cout << "Digits : " << digits << endl;
//     cout << "Special characters : " << special << endl;
// }
// int main(){
//     string word = "KRATlekh@@098l";
//     uld(word);
//     return 0;
// }

// // 5. Convert Lowercase → Uppercase

// # include <iostream>
// # include <string>
// using namespace std;
// void lu(string word){
//     for (int i = 0; word[i] != '\0'; i++){
//         if (word[i] >= 'a' && word[i] <= 'z'){
//             word[i] = word[i] - 32;
//         }
//     }
//     cout << word;
// }
// int main(){
//     string word = "KraTika";
//     lu(word);
//     return 0;
// }

// // 6. Convert Uppercase → Lowercase

// # include <iostream>
// # include <string>
// using namespace std;
// int ul(string word){
//     for (int i = 0; word[i] != '\0'; i++){
//         if (word[i] >= 'A' && word[i] <= 'Z'){
//             word[i] = word[i] + 32;
//         }
//     }
//     cout << word;
// }
// int main(){
//     string word = "kRatiKA";
//     ul(word);
//     return 0;
// }

// // Reverse a String

// # include <iostream>
// # include <string>
// using namespace std;
// int length(string str){
//     int count = 0;
//     while(str[count] != '\0'){
//         count++;
//     }
//     return count;
// }
// void reverse(string &name){
//     int start = 0;
//     int end = length(name) - 1;
//     while(start < end){
//         swap(name[start], name[end]);
//         start++;
//         end--;
//     }
//     cout << name;
// }
// int main(){
//     string name = "Kratika";
//     reverse(name);
//     return 0;
// }

// // Check Palindrome

// # include <iostream>
// # include <string>
// using namespace std;
// int length(string str){
//     int count = 0;
//     while(str[count] != '\0'){
//         count++;
//     }
//     return count;
// }
// int palindrome(string &name){
//     int start = 0;
//     int end = length(name) - 1;
//     while(start < end){
//         if (name[start] != name[end]){
//         cout << "Not Palindrome";
//         return;
//         }
//         else{
//             start++;
//             end--;
//         }
//     }
//     cout << "Palindrome";
// }
// int main(){
//     string name = "sir";
//     palindrome(name);
//     return 0;
// }

// Compare Two Strings

# include <iostream>
# include <string>
using namespace std;
int length(string str){
    int count = 0;
    while(str[count] != '\0'){
        count++;
    }
    return count;
}
bool compare(string a, string b){
    int alength = length(a);
    int blength = length(b);
    if (alength != blength){
        return false;
    }
    int aindex = 0;
    int bindex = 0;
    while(aindex < alength){
        if (a[aindex] != b[bindex]){
            return false;
        }
            aindex++;
            bindex++;
    }
    return true; 
}
int main(){
    string a = "love";
    string b = "love";
    if(compare(a, b)){
        cout << "Strings are equal";
    }
    else{
        cout << "Strings are not equal";
    }
    return 0;
}

// 10. Copy One String into Another
// 11. Concatenate Two Strings
// Hello
// World

// ↓

// HelloWorld
// 🟠 Level 3 (Interview Pattern)
// 12. Remove Spaces
// Hello World

// ↓

// HelloWorld
// 13. Replace Spaces with '@'
// Hello World

// ↓

// Hello@World
// 14. Find First Non-Repeating Character
// aabbcdde

// ↓

// c
// 15. Check Anagram
// listen
// silent

// ↓

// Anagram
// 16. Count Frequency of Every Character
// banana

// ↓

// a = 3
// b = 1
// n = 2
// 🔴 Level 4 (Slightly Harder)
// 17. Count Number of Words
// I Love DSA

// ↓

// 3
// 18. Reverse Every Word
// I Love DSA

// ↓

// I evoL ASD
// 19. Reverse Order of Words
// I Love DSA

// ↓

// DSA Love I