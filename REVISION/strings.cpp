// # include <iostream>
// using namespace std;
// int main(){
//     string str = "Kratika";
//     for(int i = 0; str[i] != '\0'; i++){
//         cout << str[i];
//     }
//     return 0;
// }

// // REMOVE SPACES

// # include <iostream>
// using namespace std;
// void remove(char arr[], int size){
//     int read = 0;
//     int write = 0;
//     while(arr[read] != '\0'){
//         if(arr[read] != ' '){
//             arr[write] = arr[read];
//             write++;
//         }
//         read++;
//     }
//     arr[write] = '\0';
//     cout << arr;
// }
// int main(){
//     char arr[100] = "Hello World";
//     remove(arr, 10);
//     return 0;
// }

// FREQUENCY OF EVERY CHARACTER

# include <iostream>
using namespace std;
int frequency(char str[]){
    int frequency[26] = {0};
    for(int i = 0; str[i] != '\0'; i++){
        int index = str[i] - 'a';
        frequency[index]++;  
    }
    for(int i)
}