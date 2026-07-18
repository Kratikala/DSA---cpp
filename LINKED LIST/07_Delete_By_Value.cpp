// Problem: Delete Node by Value
//
// Objective:
// Delete the first occurrence of a given
// value from a singly linked list.
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

Node* RemoveElement(Node* head, int el)
{
    if(head == NULL)
    {
        return head;
    }
    if(head->data == el)
    {
        Node* temp = head;
        head = head->next;
        delete(temp);
        return head;
    }
    Node* temp = head;
    Node* prev = NULL;
    while(temp != NULL)
    {
        if(temp->data == el)
        {
            prev->next = prev->next->next ;  // temp->next
            delete(temp);
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;
} 

int main()
{
    vector <int> arr = {10, 20, 30, 40};
    Node* head = ArrayToLL(arr);

    int el;
    cout << "Enter the element to delete : ";
    cin >> el;

    head = RemoveElement(head, el);
    Print(head);
    
    return 0;
}