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
    int front = -1;
    int back = -1;
    node *next;
    node(int value)
    {
        data = value;
        back++;
        next = NULL;
        if (front == -1)
        {
            front++;
        }
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
void empty(node *head)
{
    if (head->front == -1 || head->front > head->back)
    {
        cout << "Its empty!" << endl;
        return;
    }
    cout << "It's not empty!" << endl;
    return;
}
void display(node *head)
{
    while (head != NULL)
    {
        cout << head->data << "  ";
        head = head->next;
    }
    cout << endl;
    return;
}
void pop(node *&head)
{
    if (head->front == -1 || head->front > head->back)
    {
        cout << "Nothing to delete!" << endl;
        return;
    }

    head = head->next;
    head->front++;
    return;
}

int main()
{
    node *head = NULL;
    insert(head, 1);
    insert(head, 2);
    insert(head, 3);
    insert(head, 4);
    insert(head, 5);
    empty(head);
    display(head);
    pop(head);
    display(head);

    return 0;
}
