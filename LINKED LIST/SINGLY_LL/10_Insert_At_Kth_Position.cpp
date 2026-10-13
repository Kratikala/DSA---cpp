// Problem: Insert at Position
//
// Objective:
// Insert a new node at a specified
// position in a singly linked list.
//
// Concepts Used:
// - Traversal
// - Previous & Current Pointers
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
    Node* mover =  head;
    for(int i = 1; i < arr.size(); i++)
    {
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

Node* InsertAtK (Node* head, int el, int k)
{
    if(head == NULL)
    {
        if(k == 1)
        {
            return new Node(el);
        }
        else{
            return head;
        }
    }
    if(k == 1)
    {
        Node* temp = new Node(el);
        temp->next = head;
        return temp;   
    }
    int cnt= 1;
    Node* temp = head;
    while(temp != NULL)
    {
        if(cnt == (k-1))
        {
            Node* x = new Node(el);
            x->next = temp->next;
            temp->next = x;
            break;
        }
        cnt++;
        temp = temp->next;
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
    Node* head = ArrayToLL(arr);

    int el;
    cout << "Enter element to insert : ";
    cin >> el;

    int k;
    cout << "Enter position to insert the element : ";
    cin >> k;

    head = InsertAtK(head, el, k);
    Print(head);

    return 0;
}
