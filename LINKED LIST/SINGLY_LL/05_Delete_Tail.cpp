// Problem: Delete Tail Node
//
// Objective:
// Remove the last node of a singly
// linked list.
//
// Concepts Used:
// - Linked List Traversal
// - Previous Pointer
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
    Node* mover = head;
    for(int i = 1; i < arr.size(); i++)
    {
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
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

Node* RemoveAtTail(Node* head)
{
    if(head == NULL || head->next == NULL)
    {
        return NULL;
    }
    Node* temp = head;
    while(temp->next->next != NULL)
    {
        temp = temp->next;
    }
    delete(temp->next);
    temp->next = nullptr;
    return head;
}

int main()
{
    vector <int> arr = {10, 20, 30, 40}; 
    Node* head = ArrayToLL(arr);

    cout << "Before Removing Tail : " << " ";
    Print(head);

    cout << endl;

    head = RemoveAtTail(head);
    cout << "After Removing Tail : " << " ";
    Print(head);

    return 0;
}