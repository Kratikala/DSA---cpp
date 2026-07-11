// Square pattern
// For n = 4:

// * * * *
// * * * *
// * * * *
// * * * *

# include <iostream>
using namespace std;
int main(){
    for (int i = 1; i <= 4 ; i++){   
        for (int j = 1; j <= 4 ; j++){
            cout << "* ";  
        }
        cout << endl;
    }
    return 0;
}

// Right triangle pattern
// *
// * *
// * * *
// * * * *

# include <iostream>
using namespace std;
int main(){
    for (int i = 0; i <= 4 ; i++){    // go across
        for (int j = 1; j <= i ; j++){     // go down
            cout << "* ";  
        }
        cout << endl;
    }
    return 0;
}

// Reverse triangle
// * * * *
// * * *
// * *
// *

# include <iostream>
using namespace std;
int main(){
    for (int i = 4; i >= 1; i--){
        for (int j = 1; j<= i ; j++){
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}

// Number pattern
// 1
// 1 2
// 1 2 3
// 1 2 3 4

# include <iostream>
 using namespace std;
 int main(){
    for (int i = 0; i <= 4 ; i++){    // go across
        for (int j = 1; j <= i ; j++){     // go down
            cout << j << " ";  
        }
        cout << endl;
    }
    return 0;
}

// Continuous number pattern
// 1
// 2 3
// 4 5 6
// 7 8 9 10

# include <iostream>
 using namespace std;
 int main(){
    int count = 1;
    for (int i = 0; i <= 4 ; i++){    // go across
        for (int j = 1; j <= i ; j++){     // go down
            cout << count << " "; 
            count ++; 
        }
        cout << endl;
    }
    return 0;
}

// Character pattern
// A
// A B
// A B C
// A B C D

#include <iostream>
using namespace std;
 int main(){
    for (int i = 0; i <= 4 ; i++){    // go across
        for (int j = 1; j <= i ; j++){       // go down
            char ch = 'A' + j-1;     
            cout << ch << " "; 
            ch++;

        }
        cout << endl;
    }
    return 0;
 }