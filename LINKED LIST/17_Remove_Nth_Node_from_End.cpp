/*
Topic      : Linked List
Problem    : Remove Nth Node From End of Linked List
Platform   : LeetCode / Striver A2Z

Approach 1  : Brute Force (Length Calculation)
Time       : O(2N)
Space      : O(1)

Approach 2  : Optimal (Two Pointers with Gap)
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

// ---------- Approach 1 : Brute Force ----------

Node* RemoveNthNode(Node* head, int k)
{
    int cnt = 0;
    Node* temp = head;

    while(temp != NULL)
    {
        temp = temp->next;
        cnt++;
    }

    if(k <= 0 || k > cnt)
    {
        return head;
    }

    int reach = cnt - k;
    temp = head;
    if(reach == 0)
    {
        head = head->next;
        delete(temp);
        return head;
    }

    Node* prev = NULL;
    temp = head;
    for(int i = 1; i <= reach; i++)
    {
        prev = temp;
        temp = temp->next;
    }

    prev->next = temp->next;
    delete(temp);
    return head;
}

// ---------- Approach 2 : Optimal ----------

Node* RemoveNthNode(Node* head, int k)
{
    // Empty list
    if(head == NULL)
    {
        return head;
    }

    Node* A = head;
    Node* B = head;

    // Move A k steps ahead
    for(int i = 0; i < k; i++)
    {
        if(A == NULL)
        {
            // k is greater than the length of the list
            return head;
        }
        A = A->next;
    }

    // If A becomes NULL after moving k steps,
    // it means we have to delete the head.
    if(A == NULL)
    {
        Node* temp = head;
        head = head->next;
        delete temp;
        return head;
    }

    // Move both pointers together
    while(A->next != NULL)
    {
        A = A->next;
        B = B->next;
    }

    Node* nodeToDelete = B->next;
    B->next = nodeToDelete->next;
    delete nodeToDelete;

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
    vector <int> arr = {10};
    Node* head = ArrayToLL(arr);

    int k;
    cout <<  "Enter the node to delete : ";
    cin >> k;

    head = RemoveNthNode(head, k);
    if(head == NULL)
    {
        cout << "List is empty";
    }
    else
    {
        Print(head);
    }

    return 0;
}