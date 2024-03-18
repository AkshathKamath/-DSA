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

Node *deleteKeyOccurences(Node *head, int k)
{

    Node *temp = head;
    while (temp)
    {
        if (temp->data == k)
        {
            if (temp == head)
                head = head->next;
            Node *front = temp->next;
            Node *prev = temp->back;
            if (front)
                front->back = prev;
            if (prev)
                prev->next = front;
            delete temp;
            temp = front;
        }
        else
            temp = temp->next;
    }
    return head;
}

int main()
{
    vector<int> arr = {10, 4, 10, 10, 6, 10};
    int n = arr.size();

    Node *head = arrtoDLL(arr, n);

    head = deleteKeyOccurences(head, 10);
    printDLL(head);

    return 0;
}