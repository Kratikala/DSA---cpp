/*
Topic      : Linked List
Problem    : Add 1 to a Number Represented by Linked List
Platform   : Striver A2Z / GFG

Approach   : Optimal (Reverse Linked List + Carry Propagation + Reverse Back)
Time       : O(N)
Space      : O(1)
*/

# include <iostream>
# include <vector>
# include <stack>
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

// ---------- Reverse Function ----------

Node* Reverse(Node* head)
{
    Node* current = head;
    Node* prev = NULL;
    Node* next = NULL;

    while(current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    return prev;
}

// ---------- Approach : Optimal ----------

Node* AddOne(Node* head)
{
    head = Reverse(head);

    Node* current = head;
    Node* prev = NULL;
    int carry = 1;

    if(head == NULL)
    {
        return NULL;
    }

    while(current != NULL && carry != 0)
    {
        current->data += carry;
        
        if(current->data == 10)
        {
            current->data = 0;
            carry = 1;
        }
        else
        {
            carry = 0;
        }

        prev = current;
        current = current->next;
    }

    if(carry == 1)
    {
        prev->next = new Node(1);
    }

    head = Reverse(head);
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
    vector <int> arr = {9, 9, 9};
    Node* head = ArrayToLL(arr);

    head = AddOne(head);
    Print(head);
    
    return 0;
}
