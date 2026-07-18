// Problem: Delete Head Node
//
// Objective:
// Remove the first node of a singly
// linked list.
//
// Concepts Used:
// - Head Pointer
// - Dynamic Memory Management
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

Node* ArrayToLL(vector<int> &arr)
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
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}

Node* RemoveAtHead(Node* head)
{
    if(head == NULL)
    {
        return NULL;
    }

    Node* temp = head;
    head = head->next;
    delete(temp);
    return head;
}

int main()
{
    vector<int> arr = {10, 20, 30, 40};
    Node* head = ArrayToLL(arr);

    cout << "Before Removing Head : " << " ";
    Print(head);

    cout << endl;

    head = RemoveAtHead(head);
    cout << "After Removing Head : " << " ";
    Print(head);

    return 0;
}