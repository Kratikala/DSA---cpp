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

// 4. Count Uppercase, Lowercase and Digits

# include <iostream>
# include <string>
using namespace std;
int uld(string word){
    int uppercase = 0;
    int lowercase = 0;
    int digits = 0;
    int special = 0;
    for(int i = 0; word[i] != '\0'; i++){
        if (word[i] >= 'a' && word[i] <= 'z'){
            lowercase++;
        }
        else if (word[i] >= 'A' && word[i] <= 'Z'){
            uppercase++;
        }
        else if (word[i] >= 0 && word[i] <= '9'){
            digits++;
        }
        else{
            special++;
        }
    }
    cout << "Uppercase : " << uppercase << endl;
    cout << "Lowercase : " << lowercase << endl;
    cout << "Digits : " << digits << endl;
    cout << "Special characters : " << special << endl;
}
int main(){
    string word = "KRATlekh@@098l";
    uld(word);
    return 0;
}

// 5. Convert Lowercase → Uppercase

// 6. Convert Uppercase → Lowercase
// HELLO

// ↓

// hello
// 🟡 Level 2 (Core String Problems)
// 7. Reverse a String
// coding

// ↓

// gnidoc
// 8. Check Palindrome
// madam

// ↓

// Palindrome
// 9. Compare Two Strings
// apple
// apple

// ↓

// Equal
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