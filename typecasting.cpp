#include <iostream>
using namespace std;
int main(){

    // IMPLICIT TYPECASTING = The compiler automatically converts one data type to another.
    int a = 5;
    double b = 6.7;
    double result = a + b;     // 'a' is implicitly cast to double
    cout << result << endl;

    // EXPLICIT TYPECASTING = The programmer manually specifies the conversion.
    double a = 3.14;
    int b = (int)a;  // explicitly casting double to int
    cout << b << endl;
}

