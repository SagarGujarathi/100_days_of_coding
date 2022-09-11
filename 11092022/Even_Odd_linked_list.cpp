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
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL" << endl;
    return;
}
void sorting(node *&head)
{
    if (head == NULL)
    {
        return;
    }
    node *temp1 = head;
    node *newsort = NULL;
    int count = 2;
    while (temp1 != NULL)
    {
        if (temp1->data % 2 == 0)
        {
            insert(newsort, temp1->data);
        }
        temp1 = temp1->next;
    }
    temp1 = head;
    while (temp1 != NULL)
    {
        if (temp1->data % 2 != 0)
        {
            insert(newsort, temp1->data);
        }
        temp1 = temp1->next;
    }
    head = newsort;
}

int main()
{
    node *head = NULL;
    insert(head, 1);
    insert(head, 2);
    insert(head, 3);
    insert(head, 4);
    insert(head, 5);
    insert(head, 6);
    insert(head, 7);
    insert(head, 8);
    insert(head, 9);
    insert(head, 10);
    sorting(head);
    display(head);

    return 0;
}