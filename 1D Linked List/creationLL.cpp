#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *next;
};

void display(Node *head)
{
    while (head != NULL)
    {
        cout << head->value;
        if (head->next != NULL)
            cout << " -> "; 
        head = head->next;
    }
}

int main()
{
    Node *head = new Node();
    Node *first = new Node();
    Node *second = new Node();
    Node *third = new Node();

    head->value = 1;
    first->value = 2;
    second->value = 5;
    third->value = 8;

    head->next = first;
    first->next = second;
    second->next = third;
    third->next = NULL;

    display(head);
}