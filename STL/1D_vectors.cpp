# include <iostream>
# include <vector>
using namespace std;
int main(){

    vector <int> a;
    vector <int> b;

    a.push_back(10);
    a.push_back(20);
    a.push_back(30);
    a.push_back(40);

    // Traversing the vector using iterator

    vector <int> :: iterator it = a.begin();
    while(it != a.end()){
        cout << *it << " ";
        it++;
    }

    b.push_back(100);
    b.push_back(200);
    b.push_back(300);
    b.push_back(400);

    a.swap(b);

    for(int i : a){
        cout << i << " ";
    }

    for(int i : b){
        cout << i << " ";
    }


    vector <int> marks;

    marks.push_back(10);
    marks.push_back(20);
    marks.push_back(30);
    marks.push_back(40);
    marks.push_back(50);
    marks.clear();
    marks.insert(marks.begin(), 50);
    cout << marks.at(0) << endl;

    marks.erase(marks.begin(), marks.end());
    cout << "Size : " << marks.size() << endl;

    marks.reserve(10);   // reserves a minimum capacity 
    cout << marks.max_size() << endl;

    cout << marks.capacity() << endl;

    marks[0] = 100;
    cout << marks[0] << endl;
    cout << marks.at(0) << endl;

    marks.pop_back();

    cout << "Size : " << marks.size() << endl;
    
    cout << *(marks.begin()) << endl;  
    cout << marks.front() << endl;
    cout << marks.back() << endl; 
    vector<int> miles(10);
    vector<int> distnace(15, 0);
    return 0;
}


