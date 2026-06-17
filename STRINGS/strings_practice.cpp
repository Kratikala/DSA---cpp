// Print a String

# include <iostream>
# include <string>
using namespace std;
int main(){
    string name = "Kratika";
    cout << name;
    return 0;
}

// Find Length 

# include <iostream>
# include <string>
using namespace std;
int length(string name){
    int count = 0;
    while(name[count] != '\0'){
        count++;
    }
    cout << "Length : " << count << " ";
}
int main(){
    string name = "Kratika";
    length(name);
    return 0;
}

// Count Vowels

# include <iostream>
# include <string>
using namespace std;
int vowels(string word){
    int vowel = 0;
    for(int i = 0; word[i] != '\0'; i++){
        if (word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u' || word[i] == 'A' || word[i] == 'E' || word[i] == 'O' || word[i] == 'I' || word[i] == 'U'){
            vowel++;
        }
    }
    cout << "Number of vowels are : " << vowel;
}
int main(){
    string word = "Programming";
    vowels(word);
    return 0;
}

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

# include <iostream>
# include <string>
using namespace std;
void lu(string word){
    for (int i = 0; word[i] != '\0'; i++){
        if (word[i] >= 'a' && word[i] <= 'z'){
            word[i] = word[i] - 32;
        }
    }
    cout << word;
}
int main(){
    string word = "KraTika";
    lu(word);
    return 0;
}

// 6. Convert Uppercase → Lowercase

# include <iostream>
# include <string>
using namespace std;
int ul(string word){
    for (int i = 0; word[i] != '\0'; i++){
        if (word[i] >= 'A' && word[i] <= 'Z'){
            word[i] = word[i] + 32;
        }
    }
    cout << word;
}
int main(){
    string word = "kRatiKA";
    ul(word);
    return 0;
}

// Reverse a String

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
void reverse(string &name){
    int start = 0;
    int end = length(name) - 1;
    while(start < end){
        swap(name[start], name[end]);
        start++;
        end--;
    }
    cout << name;
}
int main(){
    string name = "Kratika";
    reverse(name);
    return 0;
}

// Check Palindrome

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
int palindrome(string &name){
    int start = 0;
    int end = length(name) - 1;
    while(start < end){
        if (name[start] != name[end]){
        cout << "Not Palindrome";
        return;
        }
        else{
            start++;
            end--;
        }
    }
    cout << "Palindrome";
}
int main(){
    string name = "sir";
    palindrome(name);
    return 0;
}

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

// Copy One String into Another

# include <iostream>
# include <string>
using namespace std;
void copy_str(string actual, string &copy){
    int i = 0;
    while (actual[i] != '\0'){
        copy.push_back(actual[i]);
        i++;
    }
    cout << copy << " ";
}
int main(){
    string actual = "love";
    string copy;
    copy_str(actual, copy);
    return 0;
}

// Concatenate Two Strings

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
void concatenate(string a, string b){
    int bindex = 0;
    while(b[bindex] != '\0'){
        a.push_back(b[bindex]);
        bindex++;
    }
    cout << a;
}
int main(){
    string a = "love";
    string b = "all";
    concatenate(a, b);
    return 0;
}

// Remove Spaces

# include <iostream>
# include <string>
using namespace std;
void remove(string str){
    int read = 0;
    int write = 0;
    while (str[read] != '\0'){
        if (str[read] != ' '){
            str[write] = str[read];
            write++;
        }
        read++;
    }
    str[write] = '\0';
    cout << str;
}
int main(){
    string str = "Hello World";
    remove(str);
    return 0;
}

// Replace Spaces with '@'

# include <iostream>
# include <string>
using namespace std;
void replace(string str){
    int read = 0;
    while(str[read] != '\0'){
        if (str[read] == ' '){
            str[read] = '@';
        }
        read++;
    }
    cout << str;
}
int main(){
    string str = "Hello World";
    replace(str);
    return 0;
}

// Find First Non-Repeating Character

# include <iostream>
# include <string>
using namespace std;
void non_repeating (string str){
    for( int i = 0; str[i] != '\0'; i++){
        int frequency = 0;
        for( int j = 0; str[j] != '\0'; j++){
            if(str[j] == str[i]){
                frequency++;
            }
        }
        if (frequency == 1){
                cout << str[i];
                return;
        }
    }
}
int main(){
    string str = "aabbcdde";
    non_repeating(str);
    return 0;
}

// Check Anagram

# include <iostream>
# include <string>
using namespace std;
int length (string str){
    int count = 0;
    while(str[count] != '\0'){
        count++;
    }
    return count;
}
void anagram(string a, string b){
    int alength = length(a);
    int blength = length(b);
    if (alength != blength){
        cout << "Not Anagram";
        return;
    }
    int frequency1[26] = {0};
    for( int i = 0; a[i] != '\0'; i++){
        int index = a[i] - 'a';
        frequency1[index]++;
    }
    int frequency2[26] = {0};
    for( int j = 0; a[j] != '\0'; j++){
        int index = a[j] - 'a';
        frequency2[index]++;
    }  
    for (int index = 0; index < 26; index++){
        if (frequency1[index] != frequency2[index]){
            cout << "Not Anagram";
            return;
        }
    }
    cout << "Anagram";
}
int main(){
    string a = "listen";
    string b = "silent";
    anagram(a, b);
    return 0;
}

// Count Frequency of Every Character

# include <iostream>
# include <string>
using namespace std;
void frequency(string str){
    int frequency[26] = {0};
    for(int i = 0; str[i] != '\0'; i++){
        int index = str[i] - 'a';
        frequency[index]++;
    }
    for(int index = 0; index < 26; index++){
        if (frequency[index] > 0){
            cout << (char)(index + 'a') << " = " << frequency[index] << endl;
        }
    }
}
int main(){
    string str = "aabbcdde";
    frequency(str);
    return 0;
}

// Count Number of Words

# include <iostream>
# include <string>
using namespace std;
int count(string str){
    int count = 0;
    for(int i = 0; str[i] != '\0'; i++){
        if (str[i] != ' ' &&
    (i == 0 || str[i-1] == ' '))
{
    count++;
}
    }
    cout << "Number of words are : " << count << " ";
}
int main(){
    string str = "I am Kratika Lekhra";
    count(str);
    return 0;
}

// Reverse Every Word

# include <iostream>
# include <string>
using namespace std;
void reverse(string &str, int start, int end){
    while (start < end){
        swap(str[start], str[end]);
        start++;
        end--;
    }
}
void reverse_word(string &str){
    int start = 0;
    for( int end = 0; end <= str.length(); end++){
         if (end == str.length() || str[end] == ' ') {
            reverse(str, start, end - 1);
            start = end + 1;
        }
    }
    cout << str;
}
int main(){
    string str = "Hello World";
    reverse_word(str);
    return 0;
}

// Reverse Order of Words

# include <iostream>
# include <string>
using namespace std;
void reverse(string &str, int start, int end){
    while(start < end){
        swap(str[start], str[end]);
        start++;
        end--;
    }
}
void reverse_word(string &str){
    int start = 0;
    for( int end = 0; end <= str.length(); end++){
         if (end == str.length() || str[end] == ' ') {
            reverse(str, start, end - 1);
            start = end + 1;
        }
    }
}
int main(){
    string str = "My name is Kratika Lekhra";
    reverse(str, 0, str.length() - 1);
    reverse_word(str);
    cout << str;
    return 0;
}
