#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *back;

public:
    Node(int data1, Node *next1, Node *back1)
    {
        data = data1;
        next = next1;
        back = back1;
    }

public:
    Node(int data1)
    {
        data = data1;
        next = nullptr;
        back = nullptr;
    }
};

Node *arrtoDLL(vector<int> &arr, int n)
{

    Node *head = new Node(arr[0]);
    Node *prev = head;

    for (int i = 1; i < n; i++)
    {
        Node *temp = new Node(arr[i], nullptr, prev);
        prev->next = temp;
        prev = temp;
    }
    return head;
}

void printDLL(Node *head)
{
    Node *temp = head;
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int loopLength(Node *head)
{
    Node *slow = head;
    Node *fast = head;
    while (fast != NULL && fast->next != nullptr)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
        {
            fast = fast->next;
            int ct = 1;
            while (slow != fast)
            {
                fast = fast->next;
                ct++;
            }
            return ct;
        }
    }
    return 0;
}

int main()
{
    vector<int> arr = {12, 5, 8, 7};
    int n = arr.size();
    Node *head = arrtoDLL(arr, n);

    cout << loopLength(head);

    return 0;
}