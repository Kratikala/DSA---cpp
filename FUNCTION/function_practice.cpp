// Print numbers from 1 to 100

#include <iostream>
using namespace std;
void number(){
    for (int i = 1; i <= 100; i++){
        cout << i << endl;
    }
}

int main(){
    number();
    return 0;
}

// Find Simple Interest

#include <iostream>
using namespace std;
int simple_interest(int P, int r, int t){
    return (P*r*t)/100 ;
}

int main(){
    int result = simple_interest(5, 10, 50);
    cout << result << endl;
    return 0;
}

// Print prime numbers from 1 to 100

#include <iostream>
using namespace std;

int prime(int num){
    for( int i = 2; i <= num; i++){
        bool isPrime = true;

        for(int j = 2; j < i; j++){
            if (i % j == 0){
                isPrime = false;
                break;               
            }
        }  
        if (isPrime){
        cout << i << " " ;
        }        
    }
}
    int main(){
    int num;
    cout << "Enter number: " << endl;
    cin >> num;
    prime(num);   
    return 0;

}
              
// Check whether individual is eligiblle or voting or not

#include <iostream>
using namespace std;
void eligibility(int age){

    if (age >= 18){
        cout << "Eligible" << endl;
    }
    else{
        cout << "Not Eligible" << endl;
    }
}
    int main(){
        int num;
        cout << "Enter number: " << endl;
        cin >> num;
        eligibility(num);
        return 0;

    }

// SIP calculator using function 

#include <iostream>
#include <cmath>
using namespace std;
double SIP ( double P, double actualrate, int years){
    return P * (pow(1 + actualrate, years)- 1)/actualrate * (1 + actualrate);
}
int main(){
    double monthlyInvestment;
    double annualRate;
    int years;

    cout << "Enter monthly investment: ";
    cin >> monthlyInvestment;

    cout << "Enter annual interest rate: ";
    cin >> annualRate;

    cout << "Enter years: ";
    cin >> years;

    double sip = SIP(monthlyInvestment, annualRate, years);

    cout << "Final Amount: " << sip << endl;

    return 0;
}

// Even/Odd

# include <iostream>
using namespace std;
void even_odd(int num){
    if (num % 2 == 0){
        cout << "Number is Even" << endl;
    }
    else{
        cout << "Number is Odd" << endl;
    }
}
int main(){
    int num;
    cout << "Enter number: " << endl;
    cin >> num;

    even_odd(num);
    return 0;
        
    }
    
// Factorial

#include <iostream>
using namespace std;
void factorial(int num){
    int fact = 1;
    for (int i = 1; i <= num; i++){
        fact = fact * i ;
    }
     cout << "Factorial: " << fact << " ";
}
int main(){
    int num;
    cout << "Enter number: " << " ";
    cin >> num;

    factorial(num);
    return 0;
  
}

// Prime check

#include <iostream>
using namespace std;
int prime(int num){
    bool isPrime = true;
    if (num <= 1){
        isPrime = false;
    }
    for (int j = 2; j < num; j++){
        if (num % j == 0){
            isPrime = false;
            break;
        }
    }
    if (isPrime){
        cout << "Number is Prime" << endl;
    }
    else{
        cout << "Number is not Prime" << endl;
    }
}
int main(){
    int num;
    cout << "Enter number: " << " ";
    cin >> num;
    prime(num);
    return 0;
}

// Maximum of 2 numbers

#include <iostream>
using namespace std;
int maximum(int a, int b){
    if (a > b){
        return a;
    }
    else if (b > a){
        return b;
    }
    else{
        return a;
    }
}
int main(){
    int result = maximum(15, 15);
    cout << "Maximum number is: " << result << endl;
    return 0;

}

// Maximum of 3 numbers

#include <iostream>
using namespace std;
int maximum(int a, int b, int c){
    if (a > (b, c)){
        return a;
    }
    else if (b > (a, c)){
        return b;
    }
    else if (c > (a, b)){
        return c;
    }
    else{
        return a;
    }
}
int main(){
    int result = maximum(15, 15, 20);
    cout << "Maximum number is: " << result << endl;
    return 0;
}

// Sum of first n numbers

#include <iostream>
using namespace std;
int sum(int num){
    int sum = 0;
    for (int i = 1; i <= num ; i++){
        sum = sum + i;
    }
    return sum;
}
int main(){
    int result = sum(3);
    cout << "Sum of first n natural number is: " << result << endl;
    return 0;
}

// Fibonacci nth term

#include <iostream>
using namespace std;
int fibonacci(int num){
    int first = 0;
    int second = 1;
    int next;
    cout << first << " " << second << " ";
    for (int i = 2; i <= num; i++){
        next = first + second;
        first = second;
        second = next;
        cout << next << " ";
        
    }
}
int main(){
    int result = fibonacci(5);
    return 0;
}

// Gives the nth term

#include <iostream>
using namespace std;
int fibonacci(int num){
    if(num == 0)
        return 0;
    if(num == 1)
        return 1;
    int first = 0;
    int second = 1;
    int next;
    for(int i = 2; i <= num; i++){
        next = first + second;
        first = second;
        second = next;
    }
    return second;
}
int main(){
    int result = fibonacci(5);
    cout << "5th Fibonacci term is: " << result << endl;
    return 0;
}