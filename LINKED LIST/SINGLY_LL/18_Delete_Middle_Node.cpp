/*
Topic      : Linked List
Problem    : Delete the Middle Node of a Linked List
Platform   : LeetCode 2095 / Striver A2Z

Approach   : Optimal (Slow & Fast Pointer)
Time       : O(N)
Space      : O(1)
*/

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

// ---------- Array to Linked List ----------

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

// ---------- Approach : Optimal ----------

Node* DeleteMiddle(Node* head){
    if(head == NULL)
    {
        return NULL;
    }
    
    if(head->next == NULL)
    {
        Node* temp = head;
        head = head->next;   
        delete temp;
        return NULL;
    }

    Node* slow = head;
    Node* fast = head;
    Node* prev = NULL;

    while(fast != NULL && fast->next != NULL)
    {
        prev = slow;
        slow = slow->next;
        fast = fast->next->next;
    }

    Node* todelete = slow;
    prev->next = slow->next;
    delete todelete;
    return head;
}

// ---------- Print Function ----------

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
    vector <int> arr = {10, 20, 30, 40, 50, 60};
    Node* head = ArrayToLL(arr);

    head = DeleteMiddle(head);
    Print(head);

    return 0;
}