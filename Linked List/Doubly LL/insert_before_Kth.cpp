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

Node *insertBeforeKth(Node *head, int k, int val)
{
    if (k == 1)
    {
        Node *newNode = new Node(val, head, nullptr);
        head->back = newNode;
        return newNode;
    }
    Node *temp = head;
    int ct = 0;
    while (temp)
    {
        ct++;
        if (ct == k)
            break;
        temp = temp->next;
    }
    Node *prev = temp->back;
    Node *newNode = new Node(val, temp, prev);
    temp->back = newNode;
    prev->next = newNode;
    return head;
}

int main()
{
    vector<int> arr = {12, 5, 8, 7};
    int n = arr.size();
    Node *head = arrtoDLL(arr, n);

    head = insertBeforeKth(head, 3, 100);
    printDLL(head);

    return 0;
}