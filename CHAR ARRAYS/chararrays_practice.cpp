// Find the length

# include <iostream>
using namespace std;
int getLength (char arr[]){
    int count = 0;
    int index = 0;
    while (arr[index] != '\0'){
        count++;
        index++;
    }
    return count;
}
int main(){
    char arr[] = "Kratika";
    cout << getLength(arr) << " ";
    return 0;
}

// Concatenation

# include <iostream>
using namespace std;
int getLength (char arr[]){
    int count = 0;
    int index = 0;
    while (arr[index] != '\0'){
        count++;
        index++;
    }
    return count;
}
void concatenate( char a[], char b[]){
    int aIndex = getLength(a);
    int bIndex = 0;
    while (b[bIndex] != '\0'){
        a[aIndex] = b[bIndex];
        aIndex++;
        bIndex++;
    }
    a[aIndex] = '\0';
}
int main(){
    char a[100] = "kratika";
    char b[100] = "lekhra";
    concatenate(a, b);
    cout << "Printing a :" << a << " ";
    return 0;
}

// Copy

# include <iostream>
using namespace std;
void copyingArray(char actualArray[], char copyArray[]){
    int aIndex = 0;
    int bIndex = 0;
    while (actualArray[aIndex] != '\0'){
        copyArray[bIndex] = actualArray[aIndex];
        aIndex++;
        bIndex++;
    }
    copyArray[bIndex] = '\0';
}
int main(){
    char actual[50] = "Kratika";
    char copy[50];
    copyingArray(actual, copy);
    cout << copy << " ";
    return 0;
}

// Compare

#include <iostream>
using namespace std;

int getLength(char arr[]) {
    int count = 0;
    int index = 0;
    while(arr[index] != '\0') {
        count++;
        index++;
    }
    return count;
}

bool compare(char a[], char b[]) {
    int alength = getLength(a);
    int blength = getLength(b);
    if(alength != blength) {
        return false;
    }
    int aIndex = 0;
    int bIndex = 0;
    while(aIndex < alength) {
        if(a[aIndex] != b[bIndex]) {
            return false;
        }
        aIndex++;
        bIndex++;
    }
    return true;
}

int main() {
    char a[50] = "love";
    char b[50] = "love";
    cout << compare(a, b);
    return 0;
}

// Find Length

# include <iostream>
using namespace std;
int getLength (char arr[]){
    int count = 0;
    int index = 0;
    while(arr[index] != '\0'){
        count ++;
        index++;
    }
    cout << "The length of the char array is : " << count << " ";   
}
int main(){
    char arr[8] = "Kratika";
    getLength(arr);
    return 0;
}

// Count Vowels

# include <iostream>
using namespace std;
void vowel(char arr[]){
    int count = 0;
    for (int i = 0; arr[i] != '\0'; i++){
         if (arr[i] == 'a' || arr[i] == 'e' || arr[i] == 'i' || arr[i] == 'o' || arr[i] == 'u' || arr[i] == 'A' || arr[i] == 'E' || arr[i] == 'I' || arr[i] == 'O' || arr[i] == 'U'){
            count ++;
        }
    }
    cout << "The number of vowels are : " << count << " ";   
}
int main(){
    char arr[50] = "krAtika";
    vowel(arr);
    return 0;
}

// Count Uppercase, Lowercase and Digits

# include <iostream>
using namespace std;
void uld(char arr[]){
    int uppercase = 0;
    int lowercase = 0;
    int digit = 0;
    int special = 0;
    for (int i = 0; arr[i] != '\0'; i++){
        if (arr[i] >= 'A' && arr[i] <= 'Z'){
            uppercase++;
        }
        else if (arr[i] >= 'a' && arr[i] <= 'z'){
            lowercase++;
        }
        else if (arr[i] >= '0' && arr[i] <= '9'){
            digit++;
        }
        else{
            special++;
        }
    }
    cout << "Uppercase Letters are : " << uppercase << endl;
    cout << "Lowercase Letters are : " << lowercase << endl;
    cout << "Digits are : " << digit << endl;
    cout << "Special Characters are : " << special << endl;

}
int main(){
    char arr[50] = "KratS@7a19";
    uld(arr);
    return 0;
}

// Convert Lowercase to Uppercase

# include <iostream>
using namespace std;
void lu(char arr[]){
    for(int i = 0; arr[i] != '\0' ; i++){
        if (arr[i] >= 'a' && arr[i] <= 'z'){
            arr[i] = arr[i] - 32;
        }
        cout << arr[i];
    }
}
int main(){
    char arr[50] = "krAtika";
    lu(arr);
    return 0;
}

// Convert Uppercase to Lowercase

# include <iostream>
using namespace std;
void ul (char arr[]){
    for(int i = 0; arr[i] != '\0'; i++){
        if (arr[i] >= 'A' && arr[i] <= 'Z'){
            arr[i] = arr[i] + 32;
        }
        cout << arr[i];
    }
}
int main(){
    char arr[50] = "KRATIKA";
    ul(arr);
    return 0;
}

// Reverse a Character Array

# include <iostream>
using namespace std;
int getlength(char arr[]){
    int count = 0;
    while(arr[count] != '\0'){
        count++;
    }
    return count;
}
void reverse(char arr[]){
        int start = 0;
        int end = getlength(arr) - 1;
        while (start < end){
            swap(arr[start], arr[end]);
            start++;
            end--;
        }
        cout << arr;
}
int main(){
    char arr[50] = "love";
    reverse(arr);
    return 0;
}

// Check Palindrome

# include <iostream>
using namespace std;
int getlength(char arr[]){
    int count = 0;
    while (arr[count] != '\0'){
        count++;
    }
    return count;
}
void palindrome(char arr[]){
    int start = 0;
    int end = getlength(arr) - 1;
    while(start < end){
        if (arr[start] != arr[end]){
            cout << "Not palindrome";
            return;
        }
        else{
            start ++;
            end--;
        }
    }
    cout << "Palindrome";
}
int main(){
    char arr[50] = "love";
    palindrome(arr);
    return 0;
}

// Copy One Character Array into Another

# include <iostream>
using namespace std;
void copyArray(char actual[], char copy[]){
    int aIndex = 0;
    int bIndex = 0;
    while(actual[aIndex] != '\0' ){
        copy[bIndex] = actual[aIndex];
        aIndex++;
        bIndex++;
    }
    copy[bIndex] = '\0';
    cout << copy;
}
int main(){
    char actual[50] = "Love";
    char copy[50];
    copyArray(actual, copy);
    return 0;
}

// Compare Two Character Arrays

# include <iostream>
using namespace std;
int getlength(char arr[]){
    int count = 0;
    while (arr[count] != '\0'){
        count++;
    }
    return count;
}
bool compare (char arr1[], char arr2[]){
    int alength = getlength(arr1);
    int blength = getlength(arr2);
        if (alength != blength){
            return false;
        }
        int aIndex = 0;
        int bIndex = 0;
        while (aIndex < alength){    // Keep checking until we've checked every character
            if (arr1[aIndex] != arr2[bIndex]){
                return false;
            }
                aIndex++;
                bIndex++;
        } 
        return true;
}
int main(){
    char arr1[50] = "love";
    char arr2[50] = "love";
    if (compare(arr1, arr2)){
        cout << "Equal";
    }
    else{
        cout << "Not equal";
    }
    
    return 0;
}

// Concatenate Two Character Arrays

# include <iostream>
using namespace std;
int getlength(char arr[]){
    int count = 0;
    while (arr[count] != '\0'){
        count++;
    }
    return count;
}
void concatenate(char a[], char b[]){
    int aIndex = getlength(a);
    int bIndex = 0;
    while (b[bIndex] != '\0'){
        a[aIndex] = b[bIndex];
        aIndex++;
        bIndex++;
    }
    cout << a;
}
int main(){
    char a[50] = "love";
    char b[50] = "all";
    concatenate(a, b);
    return 0;
}

// Count Frequency of a Character

# include <iostream>
using namespace std;
int frequency(char arr[]){
    char target = 'r';
    int count = 0;
    for (int i = 0; arr[i] != '\0'; i++){
        if (arr[i] == target){
            count++;
        }
    }
    cout << "Frequency is : " << count <<  "";
}
int main(){
    char arr[50] = "kratikarr";
    frequency(arr);
    return 0;
}

// Find First Non-Repeating Character

# include <iostream>
using namespace std;
void non_repeating(char arr[]){
    for(int i = 0; arr[i] != '\0'; i++){
        int frequency = 0;
        for (int j = 0; arr[j] != '\0'; j++){
            if (arr[j] == arr[i]){
                frequency++;
            }
        }
        if (frequency == 1){
            cout << arr[i] ;
            return;
        }
    }
}
int main(){
    char arr[50] = "aabbcdde";
    non_repeating(arr);
    return 0;
}

// Remove Spaces

# include <iostream>
using namespace std;
void remove(char arr[]){
    int read = 0;
    int write = 0;
    while (arr[read] != '\0'){
        if (arr[read] != ' '){
            arr[write] = arr[read];
            write++;
        }
        read++;
    }
    arr[write] = '\0';
    cout << arr;
}
int main(){
    char arr[50] = "Hello World";
    remove(arr);
    return 0;
}

// Replace Spaces with '@'

# include <iostream>
using namespace std;
void replace(char arr[]){
    for (int i = 0; arr[i] != '\0'; i++){
        if (arr[i] == ' '){
            arr[i] = '@';
        }
    }
    cout << arr;
}
int main(){
    char arr[50] = "Hello World";
    replace(arr);
    return 0;
}

// Check if Two Strings are Anagrams

# include <iostream>
using namespace std;
int getlength(char arr[]){
    int count = 0;
    while(arr[count] != '\0'){
        count++;
    }
    return count;
}
void anagram(char a[], char b[]){
    int alength = getlength(a);
    int blength = getlength(b);
    if (alength != blength){
        cout << "Not anagram";
        return;
    }
    int frequency1[26] = {0};
    for( int i = 0; a[i] != '\0'; i++){
        int index = a[i] - 'a';
        frequency1[index]++;
    }
    int frequency2[26] = {0};
    for(int j = 0; b[j] != '\0'; j++){
        int index = b[j] - 'a';
        frequency2[index]++;
    }
    for (int index = 0; index <= 25; index++){
        if (frequency1[index] != frequency2[index]){
            cout << "Not anagram";
            return;
        }
    }
    cout << "Anagram";
}
int main(){
    char a[50] = "listen";
    char b[50] = "horse";
    anagram(a, b);
    return 0;
}


