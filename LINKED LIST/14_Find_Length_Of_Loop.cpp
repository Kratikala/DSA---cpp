/*
Topic      : Linked List
Problem    : Find Length of Loop in Linked List
Platform   : GeeksforGeeks / Striver A2Z

Approach   : Optimal (Floyd's Cycle Detection)
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

Node* ArrayToLL(vector<int>& arr)
{
    Node* head = new Node(arr[0]);
    Node* mover = head;

    for (int i = 1; i < arr.size(); i++)
    {
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }

    return head;
}

// ---------- Approach : Floyd's Cycle Detection ----------

int LengthOfLoop(Node* head)
{
    Node* slow = head;
    Node* fast = head;

    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast)
        {
            int count = 1;
            Node* temp = slow->next;

            while (temp != slow)
            {
                temp = temp->next;
                count++;
            }
            return count;
        }
    }
    return 0;
}

int main()
{
    vector<int> arr = {10, 20, 30, 40, 50};
    Node* head = ArrayToLL(arr);

    Node* second = head->next;
    Node* temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = second;

    int length = LengthOfLoop(head);
    if (length != 0)
    {
        cout << "Length of Loop : " << length;
    }
    else
    {
        cout << "No cycle detected.";
    }

    return 0;
}