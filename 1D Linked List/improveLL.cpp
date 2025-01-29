#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *next;

    Node(int data)
    {
        value = data;
        next = NULL;
    }
};

void insertAtTail(Node *&head, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        return;
    }

    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

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
    Node *head = NULL;
    int n;
    char choice = 'Y';
    while (choice == 'Y')
    {   
        cout << "Enter your value: ";
        cin >> n;
        insertAtTail(head, n);
        cout << "Do you want to add Value: (Y/N): ";
        cin >> choice;
    }

    // insertAtTail(head, 1);
    // insertAtTail(head, 2);
    // insertAtTail(head, 5);
    // insertAtTail(head, 8);
    
    // Node *first = new Node();
    // Node *second = new Node();
    // Node *third = new Node();

    // head->value = 1;
    // first->value = 2;
    // second->value = 5;
    // third->value = 8;

    // head->next = first;
    // first->next = second;
    // second->next = third;
    // third->next = NULL;

    display(head);
}