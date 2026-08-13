/*
Topic      : Sorting + Linked List
Problem    : Sort List
Platform   : LeetCode 148 / Striver A2Z DSA Sheet

Approach   : Merge Sort + Slow & Fast Pointer

Time Complexity : O(n log n)
Space Complexity: O(log n)  // Recursion stack
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

Node* ArrayToLL(vector<int> &arr)
{
    if(arr.empty())
        return NULL;

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

Node* mS(Node* head)
{
    if(head == NULL || head->next == NULL)
    {
        return head;
    }

    Node* slow = head;
    Node* fast = head->next;

    while(fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }

    Node* secondhead = slow->next;
    slow->next = NULL;

    Node* left = mS(head);
    Node* right = mS(secondhead);

    Node* temp1 = left;
    Node* temp2 = right;

    Node* dummy = new Node(-1);
    Node* tail = dummy;

    while(temp1 != NULL && temp2 != NULL)
    {
        if(temp1->data <= temp2->data)
        {
            tail->next = temp1;
            tail = tail->next;
            temp1 = temp1->next;
        }
        else
        {
            tail->next = temp2;
            tail = tail->next;
            temp2 = temp2->next;
        }
    }

    if(temp1 != NULL)
    {
        tail->next = temp1;
    }

    if(temp2 != NULL)
    {
        tail->next = temp2;
    }

    return dummy->next;
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
    vector<int> arr = {3, 1, 2, 4, 1, 5, 2, 6, 4};

    Node* head = ArrayToLL(arr);
    Node* ans = mS(head);

    Print(ans);
    return 0;
}