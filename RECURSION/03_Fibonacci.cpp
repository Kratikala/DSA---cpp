/*
Topic: Recursion
Problem: Find the nth Fibonacci number.
Platform: Practice

Approach: Recursively sum the previous two Fibonacci numbers.
Time Complexity: O(2^n)
Auxiliary Space: O(n) with recursion.
*/

# include <iostream>
using namespace std;

int Fib(int n){
    if (n == 0 || n == 1){
        return n;
    }
    int sum = Fib(n - 1) + Fib(n - 2);
    return sum;
}

int main(){
    int n;
    cout << "Enter value : " << " ";
    cin >> n;
    
    for(int i = 0; i <= n; i++){
        cout << Fib(i) << " ";
    }

    return 0;
}