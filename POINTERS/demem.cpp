# include <iostream>
using namespace std;
int main(){

    // Dynamic memory allocation
    int *ptr = new int;
    *ptr = 5;
    cout << *ptr;

    // Deletion of int an dfreeing of memory location
    delete ptr;

    int *ptr = new int[5];
    ptr[0] = 10;
    ptr[1] = 20;
    ptr[2] = 30;
    *(ptr + 3) = 40;
    *(ptr + 4) = 50;

    for (int i = 0; i < 5 ; i++){
        cout << ptr[i] << " ";
    }

    delete []ptr;

    // Double pointer

    int a = 5;
    int *ptr = &a;
    int **ctr = &ptr;
    int ***dtr = &ctr;

    cout << a << endl;
    cout << &a << endl;
    cout << ptr << endl;
    cout << &ptr << endl;
    cout << *ptr << endl;
    cout << ctr << endl;
    cout << &ctr << endl;
    cout << *ctr << endl;
    cout << **ctr << endl;
    cout << dtr << endl;
    cout << &dtr << endl;
    cout << *dtr << endl;
    cout << **dtr << endl;
    cout << ***dtr << endl;
    
}