/*
Problem: Delete the last node of a doubly linked list.
Approach: Handle an empty or single-node list. Traverse to the last node, store its previous node, set the previous node's next pointer to NULL, disconnect and delete the old tail.

Time Complexity: O(n)
Space Complexity: O(1)
*/

# include <iostream>
# include <vector>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;
    Node* back;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->back = NULL;
    }
};

Node* ArrayTo2DLL(vector <int> &arr)
{
    Node* head = new Node(arr[0]);
    Node* prev = head;

    for(int i = 1; i < arr.size(); i++)
    {
        Node* temp = new Node(arr[i]);
        temp->back = prev;
        prev->next = temp;
        prev = temp;
    }
    return head;
}

Node* delete_tail(Node* head)
{
    if(head == NULL || head->next == NULL)
    {
        return NULL;
    }

    Node* tail = head;
    while(tail->next != NULL)
    {
        tail = tail->next;
    }
    Node* prev = tail->back;
    tail->back = nullptr;
    prev->next = nullptr;
    delete tail;

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
    vector <int> arr = {10, 20, 30, 40, 45};

    Node* head = ArrayTo2DLL(arr);

    head = delete_tail(head);
    Print(head);

    return 0;
}