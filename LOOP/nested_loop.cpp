#include <iostream>
using namespace std;
int main(){
    for(int i = 1; i <= 3; i = i+1){         // i changes line by line
        for(int j = 1; j <= 3; j = j+1){     // j changes inside each line
            cout << i << j << " " ;
        }
        cout << endl;
    }
    
}