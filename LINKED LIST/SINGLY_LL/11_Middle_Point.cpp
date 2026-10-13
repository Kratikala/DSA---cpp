/*
Topic      : Linked List
Problem    : Middle of the Linked List
Platform   : LeetCode 876 / Striver A2Z DSA Sheet

Approach 1 : Brute Force
Time : O(n + n) = O(n)
Space : O(1)

Approach 2 : Optimal (Slow & Fast Pointer)
Time : O(n)
Space : O(1)
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

Node* MiddleOfLLBrute(Node* head)
{
    int cnt = 0;
    Node* temp = head;
    while(temp != NULL)
    {
        temp = temp->next;
        cnt++;
    }
    temp = head;
    int mid = ((cnt)/2) + 1;
    cnt = 1;
    while(cnt < mid)
    {
        temp = temp->next;
        cnt++;

        if(cnt == mid)
        {
        cout << "Middle value is : " << temp->data << " ";
        }
    }
    return temp;
}

// ---------- Approach 2 : Optimal ----------

Node* MiddleOfLLOptimal(Node* head)
{
    Node* slow = head;
    Node* fast = head;

    while(fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

int main()
{
    vector <int> arr = {10, 20, 30, 40, 50, 60};
    Node* head = ArrayToLL(arr);

    MiddleOfLLBrute(head);
    MiddleOfLLOptimal(head);

    return 0;
}

