#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};

void insertAtTail(node *&head, int val)
{
    node *n = new node(val);

    if (head == NULL)
    {
        head = n;
        return;
    }

    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = n;

    return;
}

void insertAtHead(node *head, int val)
{
    node *n = new node(val);
    if (head == NULL)
    {
        head = n;
        return;
    }

    n->next = head;
    head = n;
}

void display(node *head)
{
    node *temp = head;
    while (temp->next != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << temp->data << " -> ";
    cout << "NULL" << endl;

    return;
}

int main()
{
    node *head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    display(head);

    return 0;
}