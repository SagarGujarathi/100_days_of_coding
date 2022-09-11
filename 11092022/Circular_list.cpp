#include <iostream>
//#include<cmath>
//#include<algorithm>
//#include<climits>
//#include<vector>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int value)
    {
        data = value;
        next = NULL;
    }
};
void inserthead(node *&head, int value)
{
    node *n = new node(value);
    if (head == NULL)
    {
        n->next = n;
        head = n;
        return;
    }
    node *temp = head;
    while (temp->next != head)
    {
        temp = temp->next;
    }
    temp->next = n;
    n->next = head;
    head = n;
    return;
}
void deletion(node *&head, int value)
{
    node *temp = head;
    while (temp->next->data != value)
    {
        if (temp->data == value)
        {
            head = temp->next;
        }
        temp = temp->next;
    }
    temp->next = temp->next->next;
    return;
}
void insert(node *&head, int value)
{

    if (head == NULL)
    {
        inserthead(head, value);
        return;
    }
    node *n = new node(value);
    node *temp = head;
    while (temp->next != head)
    {
        temp = temp->next;
    }
    temp->next = n;
    n->next = head;
    return;
}
void display(node *head)
{
    node *temp = head;
    while (temp->next != head)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << endl;
    return;
}

int main()
{
    node *head = NULL;
    insert(head, 10);
    insert(head, 11);
    insert(head, 12);
    insert(head, 13);
    insert(head, 14);
    insert(head, 15);
    inserthead(head, 5);
    deletion(head, 5);
    display(head);

    return 0;
}