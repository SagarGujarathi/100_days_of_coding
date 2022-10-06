#include <iostream>
//#include <cmath>
//#include <algorithm>
//#include <climits>
//#include <vector>
//#include <queue>
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
void BST(node *&root, int value)
{
    if (root == NULL)
    {
        root = new node(value);
        return;
    }
    if (value < root->data)
    {
        BST(root->left, value);
    }
    else
    {
        BST(root->right, value);
    }
}
void display(node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    display(root->left);
    display(root->right);
}
void check(node *root)
{
    if (root == NULL)
    {
        return;
    }
    if (root->left != NULL && root->left->data > root->data)
    {
        cout << "It's not Binary search tree!";
        return;
    }
    else
    {
        check(root->left);
    }

    if (root->right != NULL && root->right->data < root->data)
    {
        cout << "It's not Binary search tree! ";
        return;
    }
    else
    {
        check(root->right);
    }
}

int main()
{
    node *root = new node(10);
    root->left = new node(8);
    root->right = new node(11);
    check(root);
    display(root);

    return 0;
}