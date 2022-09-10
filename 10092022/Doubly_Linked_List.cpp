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
    node *previous;
    node(int value)
    {
        data = value;
        next = NULL;
        previous = NULL;
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
    n->previous = temp;

    return;
}
void displayfront(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << "->";
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
    delete temp;

    return;
}
void displayback(node *head)
{
    node *temp = head;
    do
    {
        temp = temp->next;
    } while (temp->next != NULL);
    do
    {
        cout << "->";
        cout << temp->data << " ";
        temp = temp->previous;

    } while (temp != NULL);
    cout << endl;
    delete temp;
    return;
}
void deleting(node *&head, int value)
{
    node *temp = head;
    while (temp->next->data != value && temp->next->next != NULL && temp != NULL)
    {
        temp = temp->next;
    }
    if (temp->next->next == NULL && temp->next->data == value)
    {
        temp->next->previous = temp->previous;
        temp->next = NULL;
        return;
    }
    temp->next = temp->next->next;
    temp->next->previous = temp;

    return;
}

int main()
{
    node *head = NULL;
    insert(head, 10);
    insert(head, 12);
    insert(head, 13);
    insert(head, 14);
    insert(head, 15);
    insert(head, 16);
    displayfront(head);
    displayback(head);
    deleting(head, 16);
    displayfront(head);
    displayback(head);

    return 0;
}