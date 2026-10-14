/*
Problem: Convert an array into a doubly linked list.
Approach: Create the head from the first element. Traverse the remaining elements, creating nodes and connecting each node through next and back pointers.

Time Complexity: O(n)
Space Complexity: O(n)
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
    Print(head);

    return 0;
}

