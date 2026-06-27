// 1. Print a List

# include <iostream>
# include <list>
using namespace std;
int main(){
    list <int> l = {10, 20, 30, 40, 50};
    list <int> :: iterator i = l.begin();
    while(i != l.end()){
        cout << *i << " ";
        i++;
    }
    return 0;
}

// 2. Insert Elements

# include <iostream>
# include <list>
using namespace std;
int main(){
    list <int> l = {10, 20, 30, 40, 50};
    l.push_front(5);
    l.push_back(100);

    for(int i : l){
        cout << i << " ";
    }
    return 0;
}

// 3. Delete Elements

# include <iostream>
# include <list>
using namespace std;
int main(){
    list <int> l = {10, 20, 30, 40, 50};
    l.pop_front();
    l.pop_back();

    for(int i : l){
        cout << i << " ";
    }
    return 0;
}

// 4. Reverse a List

# include <iostream>
# include <list>
using namespace std;
int main(){
    list <int> l = {1, 2, 3, 4, 5};
    l.reverse();

    for(int i : l){
        cout << i << " ";
    }
    return 0;
}

// 5. Find Sum of List

# include <iostream>
# include <list>
using namespace std;
int main(){
    list <int> l = {10, 20, 30, 40, 50};
    int sum = 0;

    for(int i : l){
        sum += i;
    }
    cout << "SUM : " << sum << " ";
    return 0;
}
