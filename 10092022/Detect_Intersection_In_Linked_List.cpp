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
void detect(node *head11, node *head22)
{
    int length1 = 1;
    int length2 = 1;
    int temp = 0;
    node *head1 = head11;
    node *head2 = head22;
    while (head1->next != NULL || head2->next != NULL)
    {
        if (head1->next != NULL)
        {
            head1 = head1->next;
            length1++;
        }
        if (head2->next != NULL)
        {
            head2 = head2->next;
            length2++;
        }
    }

    head1 = head11;
    head2 = head22;
    if (length1 < length2)
    {
        while (temp != length2 - length1)
        {
            head2 = head2->next;
            temp++;
        }
        while (head1->next != NULL && head2->next != NULL)
        {
            if (head1->data == head2->data)
            {
                cout << "Intersection detected at " << temp << " place of 1nd linked list!" << endl;
                return;
            }
            head1 = head1->next;
            head2 = head2->next;
            temp++;
        }
    }
    else
    {
        while (temp != length1 - length2)
        {
            head1 = head1->next;
            temp++;
        }
        while (head1->next != NULL && head2->next != NULL)
        {
            if (head1->data == head2->data)
            {
                cout << "Intersection detected at " << temp << " place of 2nd linked list!" << endl;
                return;
            }
            head1 = head1->next;
            head2 = head2->next;
            temp++;
        }
    }

    cout << "No Intersection detected!" << endl;

    return;
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
    insert(head2, 1);
    insert(head2, 2);
    insert(head2, 3);
    intersection(head1, head2, 14); // intersect 2 linked list here, type any value from 1st linked list
    display(head1);
    display(head2);
    detect(head1, head2); // it detects

    return 0;
}