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

void Insert_Before_Node(Node* node, int value)
{
    if (node == NULL) return;

    Node* insert = new Node(value);
    Node* prev = node->back;

    insert->next = node;
    insert->back = prev;
    node->back = insert;

    if (prev != NULL) {
        prev->next = insert;
    }
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
    vector<int> arr = {10, 20, 30, 40};

    Node* head = ConvertArrayTo2DLL(arr);

    Node* node = head->next->next;  
    Insert_Before_Node(node, 25);

    Print(head);

    return 0;
}
