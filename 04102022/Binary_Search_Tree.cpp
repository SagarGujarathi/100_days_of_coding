#include <iostream>
//#include <cmath>
//#include <algorithm>
//#include <climits>
//#include <vector>
// #include <queue>
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
void display(node *root)
{
    if (root == NULL)
    {
        return;
    }

    display(root->left);
    cout << root->data << " ";
    display(root->right);
}
node *BST(node *root, int value)
{
    if (root == NULL)
    {
        return new node(value);
    }
    if (value < root->data)
    {
        root->left = BST(root->left, value);
    }
    else
    {
        root->right = BST(root->right, value);
    }
    return root;
}
int main()
{
    int array[] = {5, 1, 3, 4, 2, 7};
    node *root = NULL;
    for (int i = 0; i < 6; i++)
    {
        if (i != 0)
        {
            BST(root, array[i]);
        }
        else
        {
            root = BST(root, array[i]);
        }
    }
    display(root);

    return 0;
}