/*
Topic      : Linked List
Problem    : Odd Even Linked List
Platform   : LeetCode 328 / Striver A2Z

Approach   : Optimal (Rearrange Links)
Time       : O(n)
Space      : O(1)
*/

#include <iostream>
#include <vector>
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

Node* Odd_Even(Node* head)
{
    if(head == NULL || head->next == NULL)
    {
        return head;
    }

    Node* odd = head;
    Node* even = head->next;
    Node* evenHead = even;

    while(even != NULL && even->next != NULL)
    {
        odd->next = even->next;
        odd = odd->next;

        even->next = odd->next;
        even = even->next;
    }

    odd->next = evenHead;

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
    vector<int> arr = {10, 20, 30, 40, 50, 60};
    Node* head = ArrayToLL(arr);

    head = Odd_Even(head);
    Print(head);

    return 0;
}