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