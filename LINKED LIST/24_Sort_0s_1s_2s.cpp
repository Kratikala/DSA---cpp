/*
Topic      : Linked List
Problem    : Sort 0s, 1s and 2s in a Linked List
Platform   : Striver A2Z / Practice

Approach   : Create three separate linked lists for 0s, 1s and 2s,
             then merge them together.

Time       : O(n)
Space      : O(1) auxiliary
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

// ---------- Approach : Optimal ----------

Node* Sort(Node* head)
{
    Node* dummy0 = new Node(-1);
    Node* dummy1 = new Node(-1);
    Node* dummy2 = new Node(-1);

    Node* zeroTail = dummy0;
    Node* oneTail = dummy1;
    Node* twoTail = dummy2;

    Node* current = head;

    while(current != NULL)
    {
        Node* next = current->next;

        if(current->data == 0)
        {
            zeroTail->next = current;
            zeroTail = zeroTail->next;
        }

        else if(current->data == 1)
        {
            oneTail->next = current;
            oneTail = oneTail->next;
        }

        else
        {
            twoTail->next = current;
            twoTail = twoTail->next;
        }

        current = next;
    }

    // Merge 
    zeroTail->next = dummy1->next;
    oneTail->next = dummy2->next;
    twoTail->next = nullptr;

    return dummy0->next;
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
    vector <int> arr = {1, 2, 0, 1, 0, 2};

    Node* head = ArrayToLL(arr);
    Node* ans = Sort(head);
    Print(ans);

    return 0;
}
