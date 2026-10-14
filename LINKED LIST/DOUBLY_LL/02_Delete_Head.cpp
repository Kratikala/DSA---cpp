/*
Problem: Delete the first node of a doubly linked list.
Approach: Handle an empty list, store the old head, move the head to the next node, set the new head's back pointer to NULL if it exists, and delete the old head.

Time Complexity: O(1)
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

Node* Array_To_2DLL(vector <int> &arr)
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

Node* delete_head(Node* head)
{
    if(head == NULL || head->next == NULL)
    {
        return head;
    }
    
    Node* prev = head;
    head = head->next;
    head->back = NULL;
    prev->next = NULL;
    delete prev;

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
    vector <int> arr = {5, 10, 20, 30, 40};

    Node* head = Array_To_2DLL(arr);

    head = delete_head(head);
    Print(head);

    return 0;
}