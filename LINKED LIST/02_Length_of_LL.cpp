// Problem: Length of Linked List
//
// Objective:
// Find the total number of nodes present
// in a singly linked list.
//
// Concepts Used:
// - Linked List Traversal
// - Counting Nodes
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

int LengthOfLL(Node* head)
{
    int count = 0;
    Node* temp = head;
    while(temp != NULL)
    {
        temp = temp->next;
        count++;
    }
    return count;
}

int main()
{
    vector <int> arr = {10, 20, 30, 40};
    Node* head = ArrayToLL(arr);

    int length = LengthOfLL(head);
    cout << "Length of LL : " << length << endl;
    
    return 0;
}