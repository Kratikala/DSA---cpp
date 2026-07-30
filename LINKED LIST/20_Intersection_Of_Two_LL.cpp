/*
Topic      : Linked List
Problem    : Intersection of Two Linked Lists
Platform   : LeetCode 160 / Striver A2Z

Approach   : Optimal1 (Length Calculation & Aligning Longer List)
Time       : O(N + M)
Space      : O(1)

Approach   : Optimal2 (Two Pointer Switching Technique)
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

// ---------- Length Function ----------

int LengthOfLL(Node* head)
{
    int count = 0;
    Node* temp = head;
    while(temp != NULL)
    {
        temp = temp->next;
        count++;
    }
    return count;
}

// ---------- Approach 1 : Brute ----------

Node* IntersectionOptimal1(Node* head1, Node* head2)
{
    int len1 = LengthOfLL(head1);
    int len2 = LengthOfLL(head2);

    Node* temp1 = head1;
    Node* temp2 = head2;

    if(len1 > len2)
    {
        int diff = len1 - len2;

        for(int i = 0; i < diff; i++)
        {
            temp1 = temp1->next;
        }
    }
    else
    {
        int diff = len2 - len1;

        for(int i = 0; i < diff; i++)
        {
            temp2 = temp2 ->next;
        }
    }

    while(temp1 != NULL && temp2 != NULL)
    {
        if(temp1 == temp2)
        {
            return temp1;
        }
        temp1 = temp1->next;
        temp2 = temp2->next;  
    }
    return NULL;
}

// ---------- Approach 2 : Optimal ----------

Node* IntersectionOptimal2(Node* head1, Node* head2)
{
    Node* A = head1;
    Node* B = head2;
    while(A != B)
    {
        if(A == NULL)
        {
            A = head2;
        }
        else
        {
            A = A->next;
        }

        if(B == NULL)
        {
            B = head1;
        }
        else
        {
            B = B->next;
        }
    }
    return A;
}

int main()
{
    Node* common = new Node(8);
    common->next = new Node(10);

    Node* head1 = new Node(1);
    head1->next = new Node(2);
    head1->next->next = new Node(3);
    head1->next->next->next = common;

    Node* head2 = new Node(5);
    head2->next = new Node(6);
    head2->next->next = common;

    Node* ans = IntersectionOptimal1(head1, head2);
    if(ans != NULL)
    {
        cout << "Intersects at : " << ans->data << " ";
    }
    else
    {
        cout << "No Intersection takes place";
    }

    Node* ans = IntersectionOptimal2(head1, head2);
    if(ans != NULL)
    {
        cout << "Intersects at : " << ans->data << " ";
    }
    else
    {
        cout << "No Intersection takes place";
    }
    return 0;

}