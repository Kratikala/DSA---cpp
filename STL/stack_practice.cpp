// 1. Push 5 Elements

# include <iostream>
# include <stack>
using namespace std;
int main(){
    stack <int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    cout << "TOP : " << st.top() << endl;
    cout << "SIZE : " << st.size() << endl;

}

// 2. Pop 2 Elements

# include <iostream>
# include <stack>
using namespace std;
int main(){
    stack <int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.pop();
    st.pop();
    cout << "TOP : " << st.top() << endl;
}

// 3. Print All Elements

# include <iostream>
# include <stack>
using namespace std;
int main(){
    stack <int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    stack <int> temp = st;
    while(!temp.empty()){
        cout << temp.top() << " ";
        temp.pop();
    }
    return 0;
}

// 4. Reverse a String

# include <iostream>
# include <stack>
# include <string>
using namespace std;
int main(){
    string name = "Kratika";
    stack <char> st;
    for(char ch : name){
        st.push(ch);
    }
        while(!st.empty()){
        cout << st.top() << " ";
        st.pop();
    }
    return 0;
}   

// 5. Count Elements

# include <iostream>
# include <stack>
using namespace std;
int main(){
    stack <int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    cout << "SIZE : " << st.size() << endl;
    return 0;
}

// 6. Check Empty

# include <iostream>
# include <stack>
using namespace std;
int main(){
    stack <int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);

    st.pop();
    st.pop();
    st.pop();
    st.pop();

    if(st.empty()){
        cout << "Stack is Empty";
    }
    else{
        cout << "Stack is not Empty";
    }
    return 0;
}

// Balanced Parentheses

# include <iostream>
# include <string>
# include <stack>
using namespace std;
int main(){
    string p = "))))((((";
    stack <char> st;
    bool balanced = true;
    for(char ch : p){
        if (ch == '('){
            st.push(ch);
        }
        else if (ch == ')'){
            if(st.empty()){
                balanced = false;
                break;
            }
            st.pop();
        }
    }
    if(!st.empty()){
        balanced = false;
    }
    if(balanced){
        cout << "BALANCED";
    }
    else{
        cout << "NOT BALANCED";
    }
    return 0;
}

