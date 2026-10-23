/*
Topic      : Doubly Linked List
Problem    : Find Pairs with Given Sum in a Sorted DLL
Platform   : Striver A2Z / GFG

Approach   : Optimal (Two Pointers)
Time       : O(N)
Space      : O(1) Auxiliary, O(K) for Result
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

vector<pair<int, int>> pairs(Node* head, int target)
{
    vector<pair<int, int>> ans;

    if(head == NULL)
    {
        return ans;
    }

    Node* left = head;
    Node* right = head;

    while(right->next != NULL)
    {
        right = right->next;
    }

    while(left != right && left->back != right)
    {
        int sum = left->data + right->data;

        if(sum == target)
        {
            ans.push_back({left->data, right->data});
            right = right->back;
            left = left->next;
        }

        else if (sum < target)
        {
            left = left->next;
        }

        else
        {
            right = right->back;
        }
    }
    return ans;
}

int main()
{
    vector <int> arr = {1, 2, 4, 5, 6, 8, 9};

    Node* head = ConvertArrayTo2DLL(arr);

    int target;
    cout << "Enter target sum : ";
    cin >> target;
    
    vector<pair<int, int>> ans = pairs(head, target);
    
    for (auto p : ans)
    {
        cout << "(" << p.first << ", " << p.second << ") ";
    }

    return 0;
}