#include <iostream>
//#include <cmath>
//#include <algorithm>
//#include <climits>
//#include <vector>
#include <queue>
//#include <deque>
//#include <stack>
using namespace std;
int count = 0;
struct node
{
    int data;
    node *left;
    node *right;
    node(int value)
    {
        data = value;
        left = NULL;
        right = NULL;
    }
};
void traversal(node *root)
{
    queue<node *> a;
    a.push(root);
    a.push(NULL);
    while (!a.empty())
    {
        node *temp = a.front();
        if (temp == NULL)
        {
            count++;
        }
        a.pop();
        if (temp != NULL)
        {
            if (temp->left != NULL)
            {
                a.push(temp->left);
            }
            if (temp->right != NULL)
            {
                a.push(temp->right);
            }
        }
        else if (!a.empty())
        {
            a.push(NULL);
        }
    }
    return;
}
int main()
{
    node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);
    traversal(root);
    cout << "  " << count;

    return 0;
}