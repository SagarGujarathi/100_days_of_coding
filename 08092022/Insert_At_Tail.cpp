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
void display(node *&head)
{

    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    return;
}
void inserthead(node *&head, int value)
{

    node *n = new node(value);
    if (head == NULL)
    {
        head = n;
        return;
    }
    n->next = head;
    head = n;
}
void finding(node *&head, int key)
{
    while (head != NULL)
    {
        if (head->data == key)
        {
            cout << endl
                 << key << " Present in this list!" << endl;
            return;
        }
        head = head->next;
    }
    cout << endl
         << "Not found!" << endl;
}

int main()
{
    node *head = NULL;
    insert(head, 10);
    insert(head, 10);
    insert(head, 10);
    insert(head, 10);
    inserthead(head, 14);
    display(head);
    finding(head, 9);

    return 0;
}