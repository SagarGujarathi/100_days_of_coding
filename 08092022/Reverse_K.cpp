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
        cout << head->data << " ";
        head = head->next;
    }
    return;
}
node *reversek(node *&head, int k)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    int count = 0;
    node *previous = NULL;
    node *current = head;
    node *Next;
    while (current != NULL && count < k)
    {
        Next = current->next;
        current->next = previous;
        previous = current;
        current = Next;
        count++;
    }
    if (Next != NULL)
    {
        head->next = reversek(Next, k);
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
    insert(head, 16);
    insert(head, 17);
    insert(head, 18);
    display(head);
    cout << endl;
    node *newhead = reversek(head, 3);
    display(newhead);
    return 0;
}