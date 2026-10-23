/*
Topic      : Doubly Linked List
Problem    : Remove Duplicates from a Sorted Doubly Linked List
Platform   : Striver A2Z / GFG

Approach   : Optimal (Adjacent Comparison + In-place Deletion)
Time       : O(N)
Space      : O(1)
*/

# include <iostream>
# include <vector>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* back;

    Node(int data){
        this->data = data;
        this->next = NULL;
        this->back = NULL;
    }
};
Node* ConvertArrayTo2DLL (vector<int> &arr)
{
    Node* head = new Node(arr[0]);
    Node* prev = head;

    for(int i = 1; i < arr.size(); i++)
    {
        Node* temp = new Node(arr[i]);
        temp->back = prev;
        prev->next = temp;
        prev = temp;
    }
    return head;
}

Node* remove_duplicates(Node* head)
{
    Node* current = head;

    while(current != NULL && current->next != NULL)
    {
        Node* front = current->next;
        
        if(current->data == front->data)
        {
            current->next = front->next;
            
            if(front->next != NULL)
            {
                front->next->back = current;
            }
            delete front;
        }
        else
        {
            current = current->next;
        }
    }
    return head;
}

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
    vector <int> arr = {1, 1, 3, 3, 4, 5};

    Node* head = ConvertArrayTo2DLL(arr);

    head = remove_duplicates(head);
    Print(head);

    return 0;
}