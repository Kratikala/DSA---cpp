#include <iostream>
using namespace std;
int main(){

    for (int count = 1; count <= 10; count = count+1)
// for( Initialization; Condition; Update)
    cout << "Kratika" << endl ;
    return 0;
}

// - - - - - - - - - - - - - - - - -

#include <iostream>
using namespace std;
int main(){

    for (int i = 0; i <5; i++)
    cout << i << endl;
    return 0;
}

// - - - - - - - - - - - - - - - - - BREAK KEYWORD

#include <iostream>
using namespace std;
int main(){

    for (int i = 1; i < 10; i++){
        cout << i << endl;
        if (i == 5){
            break;   // throws out of the loop
        }
    }
    
    return 0;
}

// - - - - - - - - - - - - - - - - - CONTINUE KEYWORD 

# include <iostream>
using namespace std;
int main(){

    for (int i = 1; i <= 5; i++){
        if (i == 3){
            continue;    // skips a single iteration
        }

        cout << i << endl;
    }
    return 0;
}
