/*
Topic      : Linked List
Problem    : Find Starting Point of Cycle in Linked List
Platform   : LeetCode 142 / Striver A2Z

Approach 1 : Brute Force (Map)
Time       : O(n log n)
Space      : O(n)

Approach 2 : Optimal (Floyd's Cycle Detection Algorithm)
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

Node* StartingPointBrute(Node* head)
{
    map <Node*, int> mp;
    Node* temp = head;
    while(temp != NULL)
    {
        if(mp[temp] > 0){
            return temp;
        }
        mp[temp]++;
        temp = temp->next;
    } 
    return NULL; 
}

// ---------- Approach 2 : Optimal ----------

Node* StartingPointOptimal(Node* head)
{
    Node* slow = head;
    Node* fast = head;

    while(fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;

        if(slow == fast)
        {
            fast = head;
            while(slow != fast)
            {
                slow = slow->next;
                fast = fast->next;
            }
            return slow; 
        } 
    }
    return NULL;
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

    Node* ans = StartingPointBrute(head);
    if (ans != NULL){
        cout << "Starting Point of Cycle is : " << ans->data << " ";
    }
    else{
        cout << "No cycle";
    }

    Node* ans = StartingPointOptimal(head);
    if (ans != NULL){
        cout << "Starting Point of Cycle is : " << ans->data << " ";
    }
    else{
        cout << "No cycle";
    }

    return 0;
}