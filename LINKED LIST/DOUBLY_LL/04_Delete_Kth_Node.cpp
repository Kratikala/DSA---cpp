/*
Topic: Linked List
Platform: Striver A2Z
Pattern: Pointer Manipulation

Approach: Find the Kth node, handle head deletion separately, and update the previous node's next pointer to skip the target node.

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

Node* delete_Kth_Node(Node* head, int k)
{
    if(head == NULL)
    {
        return NULL;
    }

    int cnt = 0;

    Node* kNode = head;
    while(kNode != NULL)
    {
        cnt++;

        if(cnt == k) break;
        kNode = kNode->next;
    }

    Node* prev = kNode->back;
    Node* front = kNode->next;

    if(prev == NULL && front == NULL)
    {
        return NULL;
    }

    else if(prev == NULL)
    {
        return delete_head(head);
    }

    else if(front == NULL)
    {
        return delete_tail(head);
    }

    prev->next = front;
    front->back = prev;

    kNode->next = nullptr;
    kNode->back = nullptr;
    delete kNode;

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

    Node* head = ConvertArrayTo2DLL(arr);

    int k;
    cout << "Enter Node to delete : " << " ";
    cin >> k;

    head = delete_Kth_Node(head, k);
    Print(head);

    return 0;
}