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
void insert(node *&head, int value)
{
    node *n = new node(value);
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
void appendk(node *&head, int value)
{
    node *newtail;
    node *newhead;
    node *tail = head;

    while (tail->next != NULL)
    {

        if (tail->data == value)
        {
            newtail = tail;
            newhead = tail->next;
        }
        tail = tail->next;
    }
    newtail->next = NULL;
    tail->next = head;
    head = newhead;

    return;
}

void display(node *head)
{
    while (head != NULL)
    {
        cout << "->";
        cout << head->data << " ";
        head = head->next;
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
    appendk(head, 12);
    display(head);

    return 0;
}