#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int data, Node *next1)
    {
        this->data = data;
        next = next1;
    }

    Node(int data)
    {
        this->data = data;
        next = nullptr;
    }
};

Node *convertArr2LL(vector<int> arr)
{
    Node *head = new Node(arr[0]);
    Node *mover = head;
    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

int lengthOfLL(Node *head)
{
    int cnt = 0;
    Node *temp = head;
    while (temp)
    {
        temp = temp->next;
        cnt++;
    }
    return cnt;
}

int searchLL(Node *head, int val)
{
    Node *temp = head;
    while (temp)
    {
        if (temp->data == val)
            return 1;
        temp = temp->next;
    }
    return 0;
}

Node *removeHead(Node *head)
{
    if (head == NULL)
        return head;
    Node *temp = head;
    head = temp->next;
    delete temp;
    return head;
}

Node *removeTail(Node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return NULL;
    }
    Node *temp = head;
    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }
    free(temp->next);
    temp->next = NULL;
    return head;
}

Node *removeKthElement(Node *head, int k)
{
    if (head == NULL)
        return head;
    if (k == 1)
    {
        Node *temp = head;
        head = head->next;
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
            prev->next = prev->next->next;
            free(temp);
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;
}

Node *removeElement(Node *head, int ele)
{
    if (head == NULL)
        return head;
    if (head->data == ele)
    {
        Node *temp = head;
        head = head->next;
        free(temp);
        return head;
    }

    Node *temp = head;
    Node *prev = NULL;
    while (temp != NULL)
    {
        if (temp->data == ele)
        {
            prev->next = prev->next->next;
            free(temp);
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;
}

Node *insertHead(Node *head, int val)
{
    return new Node(val, head);
    // Node* temp = new Node(val, head);
    // return temp;
}

Node *insertTail(Node *head, int val)
{
    if (head == NULL)
    {
        return new Node(val);
    }

    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    Node *newNode = new Node(val);
    temp->next = newNode;
    return head;
}

Node *insertKthElement(Node *head, int ele, int k)
{
    if (head == NULL)
    {
        if (k == 1)
        {
            return new Node(ele);
        }
        else
        {
            return head;
        }
    }

    int cnt = 0;
    if (k == 1)
    {
        Node *newNode = new Node(ele, head);
    }

    Node *temp = head;
    while (temp != NULL)
    {
        cnt++;
        if (cnt == (k - 1))
        {
            Node *x = new Node(ele, temp->next);
            temp->next = x;
            break;
        }
        temp = temp->next;
    }
    return head;
}

Node *insertBeforeElement(Node *head, int ele, int val)
{
    if (head == NULL)
    {
        return NULL;
    }

    if (head->data == val)
    {
        return new Node(ele, head);
    }

    Node *temp = head;
    while (temp->next != NULL)
    {
        if (temp->next->data == val)
        {
            Node *x = new Node(ele, temp->next);
            temp->next = x;
            break;
        }
        temp = temp->next;
    }
    return head;
}

void print(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    Node *head = convertArr2LL(arr);
    Node *temp = head;

    // Node *y = new Node(arr[2]);
    // cout << y->data << endl;
    // cout << y << endl;

    // int a = 2;
    // int *b = &a;
    // cout << a << " " << *b << endl;

    // head = removeHead(head);
    // head = removeTail(head);
    // head = removeKthElement(head, 2);
    // head = removeElement(head, 3);

    head = insertHead(head, 7);
    head = insertTail(head, 9);
    head = insertKthElement(head, 555, 5);
    head = insertBeforeElement(head, 888, 4);
    print(head);

    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
    // cout << lengthOfLL(head) << endl;

    // cout << searchLL(head, 55) << endl;

    return 0;
}