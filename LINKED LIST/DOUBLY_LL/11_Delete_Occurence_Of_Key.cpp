/*
Topic      : Doubly Linked List
Problem    : Delete All Occurrences of a Key
Platform   : Striver A2Z / GFG

Approach   : Optimal (Single Traversal + Pointer Updates)
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

Node* delete_occurence(Node* head, int value)
{
    Node* current = head;
    Node* prev = NULL;

    while (current != NULL)
    {
        Node* front = current->next;

        if (current->data == value)
        {
            if (prev != NULL)
            {
                prev->next = front;
            }
            else
            {
                head = front;
            }

            if (front != NULL)
            {
                front->back = prev;
            }

            delete current;
            current = front;
        }
        else
        {
            prev = current;
            current = front;
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
    vector <int> arr = {1, 2, 3, 1, 4};

    Node* head = ConvertArrayTo2DLL(arr);

    int value;
    cout << "Enter value to delete : " << " ";
    cin >> value;

    head = delete_occurence(head, value);
    Print(head);

    return 0;
}