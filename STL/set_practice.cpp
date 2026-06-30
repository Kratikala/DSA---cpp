// // 1. Print Elements of a Set 

// # include <iostream>
// # include <set>
// using namespace std;
// int main(){
//     set <int> s;
//     s.insert(5);
//     s.insert(3);
//     s.insert(1);
//     s.insert(4);
//     s.insert(2);

//     for (int i : s){
//         cout << i << " ";
//     }
//     return 0;
// }

// // 2. Remove Duplicates 

// # include <iostream>
// # include <set>
// using namespace std;
// int main(){
//     set <int> s;
//     s.insert(1);
//     s.insert(1);
//     s.insert(1);
//     s.insert(2);
//     s.insert(2);
//     s.insert(3);
//     s.insert(3);
//     s.insert(4);
//     s.insert(5);
//     s.insert(5);
    
//     for (int i : s){
//         cout << i << " ";
//     }
//     return 0;
// }

// // 3. Search an Element 

// # include <iostream>
// # include <set>
// using namespace std;
// int main(){
//     set <int> s;
//     s.insert(5);
//     s.insert(3);
//     s.insert(1);
//     s.insert(4);
//     s.insert(2);

//     if (s.find(6) != s.end()){
//         cout << "FOUND" ;
//     }
//     else{
//         cout << "NOT FOUND" ;
//     }
//     return 0;
// }

// // 4. Count Distinct Elements 

// # include <iostream>
// # include <set>
// using namespace std;
// int main(){
//     set <int> s;
//     s.insert(1);
//     s.insert(2);
//     s.insert(2);
//     s.insert(3);
//     s.insert(3);
//     s.insert(4);
//     s.insert(4);
//     s.insert(5);
//     cout << s.size() ;
        
//     return 0;
// }

// // 5. Find Largest Element

// # include <iostream>
// # include <set>
// using namespace std;
// int main(){
//     set <int> s;
//     s.insert(5);
//     s.insert(3);
//     s.insert(1);
//     s.insert(6);
//     s.insert(2); 

//     cout << "LARGEST ELEMENT IS : " << *s.rbegin() << " "; // last element is already the largest
//     return 0;
// }

// // 6. Find Smallest Element

// # include <iostream>
// # include <set>
// using namespace std;
// int main(){
//     set <int> s;
//     s.insert(5);
//     s.insert(3);
//     s.insert(1);
//     s.insert(6);
//     s.insert(2);

//     cout << "SMALLEST ELEMENT IS : " << *s.begin() << " "; // first element is the smallest 
//     return 0;
// }

// // 7. Union of Two Sets 

// # include <iostream>
// # include <set>
// using namespace std;
// int main(){
//     set <int> a;
//     a.insert(1);
//     a.insert(2);
//     a.insert(3);

//     set <int> b;
//     b.insert(3);
//     b.insert(4);
//     b.insert(5);

//     set <int> result;

//     for(int i : a){
//         result.insert(i);
//     }

//     for(int i : b){
//         result.insert(i);
//     }

//     for(int i : result){
//         cout << i << " ";
//     }
//     return 0;
// }

// // 8. Intersection of Two Sets 

// # include <iostream>
// # include <set>
// using namespace std;
// int main(){
//     set <int> a;
//     a.insert(1);
//     a.insert(2);
//     a.insert(3);

//     set <int> b;
//     b.insert(3);
//     b.insert(4);
//     b.insert(5);

//     for (int i : a){
//         if (b.find(i) != b.end()){
//             cout << i << " ";
//         }
//     }
//     return 0;
// }

// // 9. Difference of Two Sets

// # include <iostream>
// # include <set>
// using namespace std;
// int main(){
//     set <int> a;
//     a.insert(1);
//     a.insert(2);
//     a.insert(3);

//     set <int> b;
//     b.insert(3);
//     b.insert(4);
//     b.insert(5);

//     for (int i : a){
//         if (b.find(i) == b.end()){
//             cout << i << " ";
//         }
//     }
//     return 0;
// }

// 10. Iterate using Iterator

# include <iostream>
# include <set>
using namespace std;
int main(){
    set <int> s;
    s.insert(5);
    s.insert(4);
    s.insert(3);
    s.insert(2);
    s.insert(1);

    set <int> :: iterator it = s.begin();
    while( it != s.end()){
        cout << *it << " ";
        it++;
    }
    return 0;
}

