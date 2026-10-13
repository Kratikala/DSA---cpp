/*
Topic      : Linked List
Problem    : Merge Two Sorted Linked Lists
Platform   : LeetCode 21 / Striver A2Z

Approach   : Optimal (Dummy Node, Tail Pointer & Two Pointer Traversal)
Time       : O(N + M)
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

Node* MergeLL(Node* head1, Node* head2)
{
    Node* temp1 = head1;
    Node* temp2 = head2;
    Node* dummy = new Node(-1);
    Node* tail = dummy;

    while(temp1 != NULL && temp2 != NULL)
    {
        if(temp1->data < temp2->data)
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
    vector <int> arr1 = {1, 3, 5};
    vector <int> arr2 = {2, 4};

    Node* head1 = ArrayToLL(arr1);
    Node* head2 = ArrayToLL(arr2);

    Node* ans = MergeLL(head1, head2);
    Print(ans);

    return 0;
}