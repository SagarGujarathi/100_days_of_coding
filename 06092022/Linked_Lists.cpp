#include <iostream>
//#include<cmath>
//#include<algorithm>
//#include<climits>
//#include<vector>
using namespace std;
class node
{
public:
    int value;
    node *Next;
};
void print(node *head)
{
    while (head != NULL)
    {
        cout << head->value << endl;
        head = head->Next;
    }
}

int main()
{
    node *first = new node();
    node *second = new node();
    first->value = 10;
    first->Next = second;
    second->value = 20;
    second->Next = NULL;
    print(first);

    return 0;
}