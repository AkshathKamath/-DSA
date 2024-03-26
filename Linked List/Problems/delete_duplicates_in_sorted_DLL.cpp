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

Node *deleteDuplicatesSortedDLL(Node *head)
{

    Node *temp = head;
    while (temp)
    {
        Node *nextNode = temp->next;
        while (nextNode && nextNode->data == temp->data)
        {
            Node *duplicate = nextNode;
            nextNode = nextNode->next;
            delete duplicate;
        }
        temp->next = nextNode;
        if (nextNode)
            nextNode->back = temp;
        temp = temp->next;
    }
    return head;
}

int main()
{
    vector<int> arr = {1, 1, 1, 2, 3, 3, 4};
    int n = arr.size();

    Node *head = arrtoDLL(arr, n);

    head = deleteDuplicatesSortedDLL(head); // TC=O(N) & SC=O(1)
    printDLL(head);

    return 0;
}