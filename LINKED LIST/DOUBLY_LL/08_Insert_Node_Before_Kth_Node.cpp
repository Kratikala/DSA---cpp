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

Node* insert_head(Node* head, int value)
{
    Node* newHead = new Node(value);

    newHead->next = head;
    newHead->back = nullptr;

    if (head != nullptr)
    {
        head->back = newHead;
    }

    return newHead;
}

Node* insert_tail(Node* head, int value)
{
    Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }

    Node* newTail = new Node(value);

    temp->next = newTail;
    newTail->back = temp;
    newTail->next = nullptr;

    return head;
}

Node* Insert_At_K(Node* head, int value, int k)
{
    int cnt = 0;
    Node* insert = new Node(value);
    Node* kNode = head;

    while(kNode != NULL)
    {
        cnt++;

        if(cnt == k) break;
        kNode = kNode->next;
    }

    if (kNode == NULL) 
    {
        return head;
    }

    Node* prev = kNode->back;
    Node* front = kNode->next;

    if(prev == NULL)
    {
        return insert_head(head, value);
    }

    else if(front == NULL)
    {
        return insert_tail(head, value);
    }

    prev->next = insert;
    kNode->back = insert;
    insert->next = kNode;
    insert->back = prev;

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

    int value;
    cout << "Enter value to insert : " << " ";
    cin >> value;

    int k;
    cout << "Enter position to insert value : " << " " ;
    cin >> k;
    
    head = Insert_At_K(head, value, k);
    Print(head);

    return 0;
}