#include <iostream>
using namespace std;

int main(){

    int age = 20;
    (age>18)? cout << "Can Vote" : cout << "Cannot Vote" << endl;
// (condition) ? True statement : False statement

    return 0;
}


#include <iostream>
using namespace std;

int main(){

    int x = 10;
    int y = 20;
    int results = (x>y) ? x:y;
    cout << "Result: " << results << endl;

    return 0;
}