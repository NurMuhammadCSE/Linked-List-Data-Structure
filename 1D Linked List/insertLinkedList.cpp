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
    Node(int val, Node *next1)
    {
        val = val;
        Next = next1;
    }
};

Node *insertAtHead(Node *head, int value)
{
    // Node* temp = new Node(value, head);
    // return temp;
    return new Node(value, head);
}

Node *insertAtTail(Node *head, int value)
{
    if (head == NULL)
    {
        return new Node(value);
    }
    Node *temp = head;
    while (temp->Next != NULL)
    {
        temp = temp->Next;
    }
    Node *newNode = new Node(value);
    temp->Next = newNode;
    return head;
}

int main()
{

    return 0;
}