// Problem: Insert at Tail
//
// Objective:
// Insert a new node at the end of a
// singly linked list.
//
// Concepts Used:
// - Tail Pointer
// - Dynamic Memory Allocation
//
// Time Complexity: O(1) (Using Tail Pointer)
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

Node* InsertAtTail(Node* head, int val)
{
    if(head == NULL)
    {
        return new Node(val);
    }
    Node* temp = head;
    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    Node* newNode = new Node(val);
    temp->next = newNode;
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

    int val;
    cout << "Enter element to insert at tail : ";
    cin >> val;

    head = InsertAtTail(head, val);
    Print(head);

    return 0;
}