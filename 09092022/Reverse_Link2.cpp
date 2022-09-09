#include <iostream>
#include <memory>
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
    delete temp;

    return;
}
void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    delete temp;
    return;
}
node *revere(node *&head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    node *newhead = revere(head->next);
    head->next->next = head;
    head->next = NULL;
    return newhead;
}

int main()
{
    node *head = NULL;
    insert(head, 10);
    insert(head, 10);
    insert(head, 10);
    insert(head, 10);
    insert(head, 10);
    display(head);
    node *newhead = revere(head);
    display(newhead);

    return 0;
}