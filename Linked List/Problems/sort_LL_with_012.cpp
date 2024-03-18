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

Node *sortLL012(Node *head)
{

    if (head == NULL || head->next == nullptr)
        return head;

    Node *zeroHead = new Node(-1);
    Node *zero = zeroHead;
    Node *oneHead = new Node(-1);
    Node *one = oneHead;
    Node *twoHead = new Node(-1);
    Node *two = twoHead;
    Node *temp = head;

    while (temp)
    {
        if (temp->data == 0)
        {
            zero->next = temp;
            zero = zero->next;
            temp = temp->next;
        }
        else if (temp->data == 1)
        {
            one->next = temp;
            one = one->next;
            temp = temp->next;
        }
        else
        {
            two->next = temp;
            two = two->next;
            temp = temp->next;
        }
    }
    zero->next = (oneHead->next) ? oneHead->next : twoHead->next;
    one->next = twoHead->next;
    two->next = nullptr;
    return zeroHead->next;
}

int main()
{
    vector<int> arr = {1, 0, 1, 2, 0, 2, 1};
    int n = arr.size();

    Node *head = arrtoLL(arr, n);

    head = sortLL012(head); // TC=O(N) & SC=O(1)
    printLL(head);

    return 0;
}