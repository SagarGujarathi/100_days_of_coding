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
}
void display(node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}
void delet(node *&head, int value)
{

    node *temp = head;
    if (temp->data == value)
    {
        head = head->next;
        node *todelete = head;
        delete head;
    }
    if (head == NULL)
    {
        return;
    }

    while (temp->next != NULL)
    {
        if (temp->next->data == value)
        {
            temp->next = temp->next->next;
            node *todelete = temp->next;
            delete todelete;

            return;
        }
        temp = temp->next;
    }
}

int main()
{
    node *head = NULL;
    insert(head, 10);
    insert(head, 11);
    insert(head, 12);
    insert(head, 13);
    insert(head, 14);
    delet(head, 10);
    display(head);

    return 0;
}