/*
Topic      : Linked List
Problem    : Add Two Numbers
Platform   : LeetCode 2 / Striver A2Z

Approach   : Optimal (Dummy Node + Carry Simulation)
Time       : O(max(N, M))
Space      : O(max(N, M))   // Output linked list
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

Node* AddTwo(Node* head1, Node* head2)
{
    Node* temp1 = head1;
    Node* temp2 = head2;
    Node* dummy = new Node(-1);
    Node* tail = dummy;

    int carry = 0;

    while(temp1 != NULL || temp2 != NULL)
    {
        int val1;
        int val2;

        if(temp1 != NULL)
        {
            val1 = temp1->data;
        }
        else
        {
            val1 = 0;
        }

        if(temp2 != NULL)
        {
            val2 = temp2->data;
        }
        else
        {
            val2 = 0;
        }

        int sum = val1 + val2 + carry;

        if(sum >= 10)
        {
            carry = sum/10;
            Node* temp = new Node(sum % 10);
            tail->next = temp;
            tail = tail->next;
        }
        else
        {
            carry = 0;
            Node* temp = new Node(sum);
            tail->next = temp;
            tail = tail->next;
        }

        if(temp1 != NULL)
        {
            temp1 = temp1->next;
        }

        if(temp2 != NULL)
        {
            temp2 = temp2->next;
        }
    }

    if(carry ==1)
    {
        Node* care = new Node(carry);
        tail->next = care;
        tail = tail->next;
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
    vector <int> arr1 = {9, 9, 9};
    vector <int> arr2 = {9, 9, 9};

    Node* head1 = ArrayToLL(arr1);
    Node* head2 = ArrayToLL(arr2);

    Node* ans = AddTwo(head1, head2);
    Print(ans);

    return 0;
}