# include <iostream>
using namespace std;
int main(){

    int number = 50;
    cout << "Printing address : " << &number << endl;
    int *ptr = &number;

    cout << number << endl;
    cout << &number << endl;
    cout << ptr << endl;
    cout << &ptr << endl;
    cout << *ptr << endl;
    (*ptr)++;
    cout << number ;

}

// Creating array

# include <iostream>
using namespace std;
void solve( int arr[]){
    cout << "Inside function : " << sizeof(arr) << endl;;
}
int main(){
    int arr[4] = {1, 2, 3, 4};
    cout << sizeof(arr) << endl;
    solve(arr);
    return 0;
}