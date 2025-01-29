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

int main(){
    // Node* head = new Node();
    // Node* second = new Node();
    // Node* third = new Node();
    // Node* fourth = new Node();

    // head->value = 1;
    // second->value = 2;
    // third->value = 3;
    // fourth->value = 4;
    
    Node* head = new Node(1);
    Node* second = new Node(2);
    Node* third = new Node(3);
    Node* fourth = new Node(4);

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = NULL;

    display(head);
}