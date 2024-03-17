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

Node *mergeTwoSortedLL(Node *head1, Node *head2)
{

    Node *dummyNode = new Node(-1);
    Node *temp = dummyNode;
    Node *t1 = head1;
    Node *t2 = head2;
    while (t1 != NULL && t2 != NULL)
    {
        if (t1->data <= t2->data)
        {
            temp->next = t1;
            temp = t1;
            t1 = t1->next;
        }
        else
        {
            temp->next = t2;
            temp = t2;
            t2 = t2->next;
        }
    }
    if (t1 != NULL)
        temp->next = t1;
    if (t2 != NULL)
        temp->next = t2;
    return dummyNode->next;
}

int main()
{
    vector<int> arr1 = {2, 4, 8, 10};
    vector<int> arr2 = {1, 3, 3, 6, 11, 14};
    int n1 = arr1.size();
    int n2 = arr2.size();
    Node *head1 = arrtoLL(arr1, n1);
    Node *head2 = arrtoLL(arr2, n2);

    Node *head = mergeTwoSortedLL(head1, head2); // TC=O(N1+N2) & SC=O(1)
    printLL(head);

    return 0;
}