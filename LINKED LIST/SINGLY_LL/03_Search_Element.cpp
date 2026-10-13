// Problem: Search Element in Linked List
//
// Objective:
// Search for a given value in a singly
// linked list.
//
// Concepts Used:
// - Linked List Traversal
// - Linear Search
//
// Time Complexity: O(n)
// Space Complexity: O(1)


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

bool SearchElement(Node* head, int val)
{
    Node* temp = head;
    while(temp != NULL)
    {
        if(temp->data == val)
        {
            return true;
        }
        temp = temp->next;
    }
    return false;
}

int main()
{
    vector <int> arr = {10, 20, 30, 40};
    Node* head = ArrayToLL(arr);

    int value;
    cout << "Enter element to search : ";
    cin >> value;

    if (SearchElement(head, value))
    {
        cout << "Element Found!" << endl;
    }
    else
    {
        cout << "Element Not Found!" << endl;
    }
    
    return 0;
}