/*
Topic      : Linked List
Problem    : Palindrome Linked List
Platform   : LeetCode 234 / Striver A2Z

Approach 1 : Brute Force (Store values in Vector)
Time       : O(n)
Space      : O(n)

Approach 2 : Optimal (Middle + Reverse Second Half)
Time       : O(n)
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

bool Palindrome(Node* head)
{
    vector <int> ans;
    Node* temp = head;

    while(temp != NULL)
    {
        ans.push_back(temp->data);
        temp = temp->next;
    }
    int left = 0;
    int right = ans.size() - 1;

    while(left < right)
    {
        if(ans[left] != ans[right])
        {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

// ---------- Approach 2 : Optimal ----------

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

bool Palindrome(Node* head)
{
    if(head == NULL ||head->next == NULL)
    {
        return true;
    }

    Node* slow = head;
    Node* fast = head;

    while(fast->next != NULL && fast->next->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }

    slow->next = Reverse(slow->next);

    Node* oldhead = head;
    Node* newhead = slow->next;
    while(newhead != NULL)
    {
        if(oldhead->data != newhead->data)
        {
            return false;
        }
        oldhead = oldhead->next;
        newhead = newhead->next;
    }

    slow->next = Reverse(slow->next);
    return true;
}

int main()
{
    vector <int> arr = {10, 20, 30, 20, 40};
    Node* head = ArrayToLL(arr);
    
    if(Palindrome(head))
    {
        cout << "PALINDROME";
    }
    else
    {
        cout << "NOT PALINDROME";
    }

    return 0;
}