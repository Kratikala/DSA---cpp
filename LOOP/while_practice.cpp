// Generate 1 - 100

#include <iostream>
using namespace std;
int main(){
    int i = 1;
    while (i <= 100){
        cout << i << endl;
        i = i + 1;
    }
    return 0;
}

// Generate 100 - 1

#include <iostream>
using namespace std;
int main(){
    int i = 100;
    while (i >= 1){
        cout << i << endl;
        i = i - 1;
    }
    return 0;
}

// Name 50 times

#include <iostream>
using namespace std;
int main(){
    int i = 1;
    while (i <= 50){
        cout << "Kratika" << endl;
        i = i+ 1;
    }
    return 0;
}

// Print 0 - -10

#include <iostream>
using namespace std;
int main(){
    int i = 0;
    while (i >= -10){
        cout << i << endl;
        i = i - 1;
    }
    return 0;
}

// Table of 7

#include <iostream>
using namespace std;
int main(){
    int number;
    cout << "Enter Number: " << " ";
    cin >> number;

    int i = 1;
    while(i <= 10){
        cout << i*number << endl;
        i ++;
    }
    return 0;
}

// Print A to Z

#include <iostream>
using namespace std;
int main(){
    char ch = 'A';
    while (ch <= 'Z'){
        cout << ch << endl;
        ch++;
    }
    
    return 0;
}

// Print a to z

#include <iostream>
using namespace std;
int main(){
    char ch = 'a';
    while (ch <= 'z'){
        cout << ch << endl;
        ch++;
    }
    
    return 0;
}

// Reverse a number

# include <iostream>
using namespace std;
int main(){
    int num;
    int digit;
    int rev = 0;
    cout << "Enter number: " << endl;
    cin >> num;

    while(num > 0){
        digit = num % 10;
        num = num/10;
        rev = rev * 10 + digit;
    }
    cout << "Reverse: " << rev << endl;
}

// Check palindrome number

#include <iostream>
using namespace std;

int main(){
    int num;
    int digit;
    int rev = 0;
    int original;
    cout << "Enter number: " << endl;
    cin >> num;
    original = num;
    while(num > 0){
        digit = num % 10;
        num = num / 10;
        rev = rev * 10 + digit;
    }
    cout << "Reverse: " << rev << endl;
    if(original == rev){
        cout << "Number is Palindrome" << endl;
    }
    else{
        cout << "Number is not Palindrome" << endl;
    }
    return 0;
}

// Sum of digits of a number

#include <iostream>
using namespace std;
int main(){
    int num;
    int sum = 0;
    int digit;
    cout << "Enter number: " << endl;
    cin >> num;

    while (num > 0){
        digit = num % 10 ;
        num = num/10;
        sum = sum + digit;
    }
    cout << "Sum: " << sum << endl;
    return 0;
}

// Print Fibonacci series till n terms

# include <iostream>
using namespace std;
int main(){
    int num;
    int first = 0;
    int second = 1;
    int next;
    cout << "Enter number:" << " ";
    cin >> num;
    cout << first << " " << second << " ";

    int i = 3;
    while (i <= num){
        i ++;
        next = first + second;
        cout << next << " ";
        first = second;
        second = next;
    }   
    return 0;
}



