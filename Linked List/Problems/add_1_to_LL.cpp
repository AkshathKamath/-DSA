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

int carrySum(Node *temp)
{

    if (temp == NULL)
        return 1;
    int carry = carrySum(temp->next);
    temp->data += carry;
    if (temp->data < 10)
        return 0;
    temp->data = 0;
    return 1;
}

Node *add1ToLL(Node *head)
{

    int carry = carrySum(head);
    if (carry == 1)
    {
        Node *newNode = new Node(1);
        newNode->next = head;
        return newNode;
    }
    return head;
}

int main()
{
    vector<int> arr = {9, 9, 9, 9};
    int n = arr.size();
    Node *head = arrtoLL(arr, n);

    head = add1ToLL(head); // TC=O(N) & SC=O(N)
    printLL(head);

    return 0;
}