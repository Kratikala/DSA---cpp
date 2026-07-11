// Generate 1 - 100

#include <iostream>
using namespace std;
int main(){
     for(int i = 1; i <= 100; i ++)
     cout << i << " ";
     return 0;
}

// Generate 100 - 1

#include <iostream>
using namespace std;
int main(){
    for (int i = 100; i >= 1; i--)
    cout << i << " ";
    return 0;
}

// Name 50 times

#include <iostream>
using namespace std;
int main(){
    for (int i = 1; i <= 50; i++)
    cout << "Kratika" << endl;
    return 0;
}

// Print 0 - -10

#include <iostream>
using namespace std;
int main(){
    for (int i = 0; i >= -10; i--)
    cout << i << endl;
    return 0;
}

// Table of 7

#include <iostream>
using namespace std;
int main(){
    int number;
    cout << "Enter Number: " << endl;
    cin >> number;

    for (int i = 1; i <= 10; i++)
    cout << i * number << endl;
    return 0;

}

// Print A to Z

#include <iostream>
using namespace std;
int main(){
    for (char ch = 'A'; ch <= 'Z'; ch++)
    cout << ch << endl;
    return 0;
}

// Print a to z

#include <iostream>
using namespace std;
int main(){
    for (char ch = 'a'; ch <= 'z'; ch++)
    cout << ch << endl;
    return 0;
}

// Find sum of first n natural numbers

# include <iostream>
using namespace std;
int main(){
    int num;
    int total_sum = 0;
    cout << "Enter Number: " << endl;
    cin >> num;

    for (int i = 1; i <= num; i ++ )
    total_sum = total_sum + i;
    cout << total_sum << endl;
    return 0;
}

// Find factorial of a number

# include <iostream>
using namespace std;
int main(){
    int num;
    int factorial = 1;
    cout << "Enter number: " << endl;
    cin >> num;

    for (int i = 1; i <= num; i ++ )
    factorial = factorial * i;
    cout << "Factorial: " << factorial << endl;
    return 0;
}

// Count digits in a number

# include <iostream>
using namespace std;
int main(){
    int num;
    int count = 0;
    cout << "Enter number: " << endl;
    cin >> num;

    for ( ; num > 0; num = num/10)
    count += 1;
    cout << count << endl;
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

    for (; num > 0; num = num/10){
        digit = num % 10;
        rev = rev * 10 + digit;
    }
    cout << "Reverse: " << rev << endl;
}

// Check palindrome number

# include <iostream>
using namespace std;
int main(){
    int num;
    int rev = 0;
    int digit;
    int original;
    cout << "Enter number: " << " ";
    cin >> num;
    original = num;

    for( ; num > 0; num = num/10){
        digit = num % 10;
        rev = rev * 10 + digit;
    }
    cout << "Reverse: " << rev << endl;
    if (original == rev){
        cout << "Number is Palindrome" << endl;
    }
    else{
        cout << "Number is not Palindrome" << endl;
    }
    return 0;
}

// Sum of digits of a number

# include <iostream>
using namespace std;
int main(){
    int num;
    int digit;
    int sum = 0;
    cout << "Enter number: " << " ";
    cin >> num;

    for ( ; num > 0; num = num/10){
        digit = num % 10;
        sum = digit + sum;
    }
    cout << sum << endl;
}

// Print Fibonacci series till n terms

#include <iostream>
using namespace std;
int main(){
    int num;
    int first = 0;
    int second = 1;
    int next;
    cout << "Enter number: " << " ";
    cin >> num;
    cout << first << " " << second << " ";

    for( int i = 3; i <= num; i++){
        next = first + second;
        cout << next << " ";
        first = second;
        second = next;
    }
    return 0;
}



