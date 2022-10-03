#include <iostream>
//#include <cmath>
//#include <algorithm>
//#include <climits>
//#include <vector>
#include <queue>
//#include <deque>
//#include <stack>
using namespace std;
struct node
{
    int data;
    node *left;
    node *right;
    node(int value)
    {
        data = value;
        left = right = NULL;
    }
};
void flatten(node *root)
{
    if (root == NULL || (root->right == NULL && root->left == NULL))
    {
        return;
    }

    if (root->left != NULL)
    {
        flatten(root->left);
        node *temp = root->right;
        root->right = root->left;
        root->left = NULL;
        node *temp1 = root->right;
        while (temp1->right != NULL)
        {
            temp1 = temp1->right;
        }
        temp1->right = temp;
    }
}
void display(node *root)
{
    node *temp = root;
    while (temp != NULL)
    {
        cout << "->" << temp->data;
        temp = temp->right;
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
    flatten(root);
    display(root);

    return 0;
}