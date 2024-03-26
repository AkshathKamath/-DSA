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

Node *findTail(Node *head)
{
    Node *temp = head;
    while (temp->next != nullptr)
        temp = temp->next;
    return temp;
}

vector<vector<int>> pairsWithGivenSumInSortedDLL(Node *head, int k)
{

    Node *l = head;
    Node *r = findTail(head);
    vector<vector<int>> ans;
    while (l->data < r->data)
    {
        if (l->data + r->data == k)
        {
            ans.push_back({l->data, r->data});
            l = l->next;
            r = r->back;
        }
        else if (l->data + r->data < k)
            l = l->next;
        else
            r = r->back;
    }
    return ans;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 9};
    int n = arr.size();

    Node *head = arrtoDLL(arr, n);

    vector<vector<int>> ans = pairsWithGivenSumInSortedDLL(head, 5); // TC=O(2N) & SC=O(1)
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[0].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
    }

    return 0;
}