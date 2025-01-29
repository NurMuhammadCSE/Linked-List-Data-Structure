#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *Next;
    Node(int val)
    {
        val = val;
        Next = NULL;
    }
};

void print(Node *head)
{
    while (head != NULL)
    {
        cout << head->val << " ";
    }
    head = head->Next;
    cout << endl;
}

Node *removeHead(Node *head)
{
    if (head == NULL)
        return NULL;
    Node *temp = head;
    head = head->Next;
    delete temp;
    return head;
}

Node *removeTail(Node *head)
{
    if (head == NULL || head->Next == NULL)
    {
        return NULL;
    }

    Node *temp = head;
    while (head->Next->Next != NULL)
    {
        temp = temp->Next;
    }
    delete temp->Next;
    temp->Next = NULL;
    return head;
}

Node *removeK(Node *head, int k)
{
    if (head == NULL)
        return head;
    if (k == 1)
    {
        Node *temp = head;
        head = head->Next;
        free(temp);
        return head;
    }
    int cnt = 0;
    Node *temp = head;
    Node *prev = NULL;
    while (temp != NULL)
    {
        cnt++;
        if (cnt == k)
        {
            prev->Next = prev->Next->Next;
            free(temp);
            break;
        }
        prev = temp;
        temp = temp->Next;
    }
    return head;
}

Node *removeElement(Node *head, int value)
{
    if (head == NULL)
        return head;
    if (head->val == value)
    {
        Node *temp = head;
        head = head->Next;
        free(temp);
        return head;
    }
    Node *temp = head;
    Node *prev = NULL;
    while (temp != NULL)
    {
        if (temp->val == value)
        {
            prev->Next = prev->Next->Next;
            free(temp);
            break;
        }
        prev = temp;
        temp = temp->Next;
    }
    return head;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    Node *head = removeHead(head);
}