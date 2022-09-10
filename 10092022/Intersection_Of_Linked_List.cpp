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
void intersection(node *&head2, node *&head1, int value)
{
    node *head11 = head1;
    node *head22 = head2;
    while (head22->data != value && head22 != NULL)
    {
        head22 = head22->next;
    }
    while (head11->next != NULL)
    {
        head11 = head11->next;
    }
    head11->next = head22;
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
}

int main()
{
    node *head1 = NULL;
    node *head2 = NULL;
    insert(head1, 10);
    insert(head1, 11);
    insert(head1, 12);
    insert(head1, 13);
    insert(head1, 14);
    insert(head1, 15);
    insert(head2, 11);
    insert(head2, 12);
    insert(head2, 13);
    intersection(head1, head2, 14);
    display(head1);
    display(head2);

    return 0;
}