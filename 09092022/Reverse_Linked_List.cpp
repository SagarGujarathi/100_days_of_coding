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
    return;
}
node *reverse(node *&head)
{
    node *previous = NULL;
    node *current = head;
    node *Next;
    while (current != NULL)
    {
        Next = current->next;
        current->next = previous;
        previous = current;
        current = Next;
    }

    return previous;
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
    // display(head);
    node *newhead = reverse(head);
    display(newhead);
    return 0;
}