// Problem: Insert Before Value
//
// Objective:
// Insert a new node before a given
// value in a singly linked list.
//
// Concepts Used:
// - Traversal
// - Pointer Manipulation
//
// Time Complexity: O(n)
// Space Complexity: O(1)


# include <iostream>
# include <vector>
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

Node* ArrayToLL(vector <int> &arr)
{
    Node* head = new Node(arr[0]);
    Node* mover =  head;
    for(int i = 1; i < arr.size(); i++)
    {
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

Node* InsertBeforeValue (Node* head, int el, int val)
{
    if(head == NULL)
    {
        return NULL;
    }
    if(head->data == val)
    {
        Node* temp = new Node(el);
        temp->next = head;
        return temp;   
    }
    Node* temp = head;
    while(temp->next != NULL)
    {
        if(temp->next->data == val)
        {
            Node* x = new Node(el);
            x->next = temp->next;
            temp->next = x;
            break;
        }
        temp = temp->next;
    }
    return head;
}

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
    vector <int> arr = {10, 20, 30, 40};
    Node* head = ArrayToLL(arr);

    int el;
    cout << "Enter element to insert : ";
    cin >> el;

    int val;
    cout << "Enter value to insert the element : ";
    cin >> val;

    head = InsertBeforeValue(head, el, val);
    Print(head);

    return 0;
}