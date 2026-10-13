// Problem: Insert at Head
//
// Objective:
// Insert a new node at the beginning
// of a singly linked list.
//
// Concepts Used:
// - Head Pointer
// - Dynamic Memory Allocation
//
// Time Complexity: O(1)
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
    Node* mover = head;
    for(int i = 1; i< arr.size(); i++)
    {
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

void InsertAtHead(Node* &head, int val)
{
    Node* temp = new Node(val);
    temp->next = head;
    head = temp;
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

    int val;
    cout << "Enter element to insert at head : ";
    cin >> val;

    InsertAtHead(head, val);
    Print(head);

    return 0;
}