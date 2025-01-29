#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int value;
    Node* next;

    Node(int val){
        value = val;
        next = NULL;
    }
};

void display(Node* n){
    while(n != NULL){
        cout<<n->value;
        if(n->next != NULL){
            cout<<" -> ";
        }
        n = n->next;
    }
    cout << endl;
}

void insertAtHead(Node* &head, int val){
    Node* newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}

void insertAtTail(Node* &head, int val){
    Node* newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        return;
    }
    Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newNode;
}

int main(){    
    Node* head = NULL;
    insertAtHead(head, 2);
    insertAtHead(head, 1);
    insertAtHead(head, 0);

    insertAtTail(head, 3);
    insertAtTail(head, 4);
    insertAtTail(head, 5);
    insertAtTail(head, 6);
    insertAtTail(head, 7);

    display(head);
}