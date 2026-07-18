// Problem: Array to Linked List
//
// Objective:
// Convert an array into a singly linked list.
//
// Concepts Used:
// - Dynamic Memory Allocation
// - Node Creation
// - Pointer Manipulation
//
// Time Complexity: O(n)
// Space Complexity: O(n)


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
    cout << endl;
}

int main()
{
    vector <int> arr = {10, 20, 30, 40};
    Node* head = ArrayToLL(arr);

    cout << "Linked List : ";
    Print(head);

    return 0;
}