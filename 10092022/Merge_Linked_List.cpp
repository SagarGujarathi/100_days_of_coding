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
        cout << "->" << head->data << " ";
        head = head->next;
    }
    cout << endl;
    return;
}
void merge(node *&head11, node *&head22)
{
    node *head1 = head11;
    node *head2 = head22;
    node *newll = NULL;
    while (head1->next != NULL || head2->next != NULL)
    {
        if ((head1->data) < (head2->data) && head1->next != NULL)
        {

            insert(newll, head1->data);
            head1 = head1->next;
        }
        else if (head2->next != NULL)
        {

            insert(newll, head2->data);
            head2 = head2->next;
        }
    }
    if (head1->data < head2->data)
    {

        insert(newll, head1->data);
        insert(newll, head2->data);
    }
    else
    {
        insert(newll, head2->data);
        insert(newll, head1->data);
    }

    display(newll);

    return;
}

int main()
{
    node *head1 = NULL;
    node *head2 = NULL;
    insert(head1, 1);
    insert(head1, 3);
    insert(head1, 5);
    insert(head1, 7);
    insert(head1, 9);
    insert(head2, 2);
    insert(head2, 4);
    insert(head2, 6);
    insert(head2, 8);
    insert(head2, 10);
    display(head1);
    display(head2);
    merge(head1, head2);

    return 0;
}