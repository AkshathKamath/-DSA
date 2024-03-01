#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

public:
    Node(int data1)
    {
        data = data1;
        next = nullptr;
    }
};

Node *arrtoLL(vector<int> &arr, int n)
{

    Node *head = new Node(arr[0]);
    Node *mover = head;

    for (int i = 1; i < n; i++)
    {
        Node *temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

void printLL(Node *head)
{
    Node *temp = head;
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

Node *deleteKthNode(Node *head, int k)
{
    if (head == NULL)
        return NULL;
    if (k == 1) // OR head->data==value for a value
    {
        Node *temp = head;
        head = head->next;
        delete temp;
        return head;
    }
    int ct = 0;
    Node *temp = head;
    Node *prev = NULL;
    while (temp)
    {
        ct++;
        if (ct == k) // OR temp->data==value for a value
        {
            prev->next = prev->next->next;
            delete temp;
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;
}

int main()
{
    vector<int> arr = {12, 5, 8, 7};
    int n = arr.size();
    Node *head = arrtoLL(arr, n);

    head = deleteKthNode(head, 2); // TC=O(k)
    printLL(head);

    return 0;
}