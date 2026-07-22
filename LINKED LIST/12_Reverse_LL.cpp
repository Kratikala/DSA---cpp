/*
Topic      : Linked List
Problem    : Reverse Linked List
Platform   : LeetCode 206 / Striver A2Z

Approach 1 : Brute Force (Stack)
Time       : O(n)
Space      : O(n)

Approach 2 : Optimal (Three Pointers)
Time       : O(n)
Space      : O(1)
*/


# include <iostream>
# include <vector>
# include <stack>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

// ---------- Array to Linked List ----------

Node* ArrayToLL(vector <int> &arr)
{
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i = 1; i < arr.size(); i++)
    {
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

// ---------- Approach 1 : Brute Force ----------

Node* ReverseBrute(Node* &head)
{
    stack <int> st;
    Node* temp = head;
    while(temp != NULL)
    {
        st.push(temp->data);
        temp = temp->next;  
    }
    temp = head;
    while(temp != NULL){
        temp->data = st.top();
        st.pop();
        temp = temp->next;
    }
    return head;
}

// ---------- Approach 2 : Optimal ----------

Node* ReverseOptimal(Node* head)
{
    Node* current = head;
    Node* prev = NULL;
    Node* next = NULL;

    while(current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    return prev;
}

// ---------- Print Function ----------

void Print(Node* head)
{
    while(head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}

int main()
{
    vector <int> arr = {10, 20, 30, 40, 50, 60};
    Node* head = ArrayToLL(arr);

    head = ReverseBrute(head);
    Print(head);

    head = ReverseOptimal(head);
    Print(head);

    return 0;
}
