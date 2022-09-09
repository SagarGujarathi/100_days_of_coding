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
void display(node *head)
{
    while (head != NULL)
    {
        cout << "->";
        cout << head->data;
        head = head->next;
    }
    return;
}
void makecycle(node *&head, int value)
{
    node *temp1;
    node *temp2;
    node *temp3 = head;
    while (temp3 != NULL)
    {
        if (temp3->data == value)
        {
            temp1 = temp3;
        }
        if (temp3->next == NULL)
        {
            temp2 = temp3;
        }
        temp3 = temp3->next;
    }
    temp2->next = temp1;
    delete temp1;
    delete temp2;
    delete temp3;
    return;
}

void removecycle(node *&head)
{
    node *temp1 = head;
    node *temp2 = head;
    do
    {
        temp1 = temp1->next;
        temp2 = temp2->next->next;

    } while (temp1 != temp2);

    temp2 = head;
    while (temp1->next != temp2->next)
    {
        temp1 = temp1->next;
        temp2 = temp2->next;
    }
    temp1->next = NULL;

    delete temp1;
    delete temp2;
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
    makecycle(head, 12);

    removecycle(head);
    display(head);
    return 0;
}