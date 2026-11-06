/*
Topic: Recursion / Stack
Problem: Reverse a Stack
Platform: Coding Ninjas / GeeksforGeeks

Time Complexity: O(n^2)
Auxiliary Space: O(n), due to recursive call stack.
*/

# include <iostream>
# include <stack>
using namespace std;

void insertatbottom(stack <int> &st, int x)
{
    if(st.empty())
    {
        st.push(x);
        return;
    }

    int top = st.top();
    st.pop();

    insertatbottom(st, x);

    st.push(top);
}

void reverse(stack <int> &st)
{
    if(st.size() <= 1)
    {
        return;
    }

    int top_element = st.top();
    st.pop();

    reverse(st);
    insertatbottom(st, top_element);
}

int main()
{
    stack<int> st;
    st.push(2);
    st.push(3);
    st.push(1);
    st.push(4);

    reverse(st);
    
    stack <int> temp = st;

    while(!temp.empty())
    {
        cout << temp.top() << " ";
        temp.pop();
    }

    return 0;
}