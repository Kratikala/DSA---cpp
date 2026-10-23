/*
Topic      : Doubly Linked List
Problem    : Reverse a Doubly Linked List
Platform   : Striver A2Z / GFG

Approach   : Optimal (Pointer Swapping)
Time       : O(N)
Space      : O(1)
*/

# include <iostream>
# include <vector>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* back;

    Node(int data){
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

Node* reverse(Node* head)
{
    if(head == NULL || head->next  == NULL){
        return head;
    }

    Node* prev = NULL;
    Node* current = head;
    while(current != NULL){
        Node* last = current->back;
        current->back = current->next;
        current->next - last;
        current = current->back;
    }
    return prev->back;
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

    head = reverse(head);
    Print(head);

    return 0;
}