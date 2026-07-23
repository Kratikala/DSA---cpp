/*
Topic      : Linked List
Problem    : Detect Cycle in Linked List
Platform   : LeetCode 141 / Striver A2Z

Approach 1 : Brute Force (Map)
Time       : O(n log n)
Space      : O(n)

Approach 2 : Optimal (Floyd's Cycle Detection)
Time       : O(n)
Space      : O(1)
*/

# include <iostream>
# include <vector>
# include <map>
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

Node* ArrayToLL(vector <int> &arr)
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

// ---------- Approach 1 : Brute Force ----------

bool DetectCycleBrute(Node* head)
{
    map <Node*, int> mp;
    Node* temp = head;
    while(temp != NULL)
    {
        mp[temp]++;
        if(mp[temp] > 1)
        {
            return true;
        }
        temp = temp->next;
    }
    return false;
}

// ---------- Approach 2 : Optimal ----------

bool DetectCycleOptimal(Node* head)
{
    Node* slow = head;
    Node* fast = head;

    while(fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;

        if(slow == fast)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    vector <int> arr = {10, 20, 30, 40, 50};
    Node* head = ArrayToLL(arr);

    Node* second = head->next;
    Node* temp = head;
    
    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = second;

    if (DetectCycleBrute(head))
    {
        cout << "Linked List is Cyclic";
    }
    else
    {
        cout << "No cycle detected";
    }

    if (DetectCycleOptimal(head))
    {
        cout << "Linked List is Cyclic";
    }
    else
    {
        cout << "No cycle detected";
    }

    return 0;
}