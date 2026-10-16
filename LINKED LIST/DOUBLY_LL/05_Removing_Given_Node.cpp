/*
Topic: Doubly Linked List
Platform: Striver A2Z
Pattern: Pointer Manipulation

Approach: The target node pointer is already given. Use its back and next pointers to reconnect its neighbors. Handle tail deletion separately.

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

Node* ConvertArrayTo2DLL (vector<int> &arr)
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

void Removing_Node(Node* temp)
{
    Node* prev = temp->back;
    Node* front = temp->next;

    if(front == NULL)
    {
        prev->next = NULL;
        delete temp;
        return;
    }

    prev->next = front;
    front->back = prev;
    delete temp;
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

    Node* head = ConvertArrayTo2DLL(arr);
    Node* temp = head->next->next;
    Removing_Node(temp);
    Print(head);

    return 0;
}