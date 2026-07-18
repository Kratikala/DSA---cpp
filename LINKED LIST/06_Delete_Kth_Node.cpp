// Problem: Delete Kth Node
//
// Objective:
// Delete the node present at the given
// position in a singly linked list.
//
// Concepts Used:
// - Previous Pointer
// - Current Pointer
// - Traversal
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

void Print(Node* head)
{
    while(head != NULL){
        cout << head->data << " ";
        head = head->next;
    }
}

Node* RemoveAtPosition(Node* head, int k)
{
    if(head == NULL)
    {
        return head;
    }
    if(k == 1)
    {
        Node* temp = head;
        head = head->next;
        delete(temp);
        return head;
    }
    int cnt = 0;
    Node* temp = head;
    Node* prev = NULL;
    while(temp != NULL)
    {
        cnt++;
        if(cnt == k)
        {
            prev->next = prev->next->next ;  // temp->next
            delete(temp);
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;
} 

int main()
{
    vector <int> arr = {10, 20, 30, 40};
    Node* head = ArrayToLL(arr);

    int k;
    cout << "Enter the index to delete : ";
    cin >> k;

    head = RemoveAtPosition(head, k);
    Print(head);
    return 0;
}