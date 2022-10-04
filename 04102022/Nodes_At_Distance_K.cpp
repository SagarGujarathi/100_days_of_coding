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

void display(node *root, int value)
{
    if (value < 0 || root == NULL)
    {
        return;
    }
    if (value == 0)
    {
        cout << root->data << " ";
        return;
    }
    display(root->left, value - 1);
    display(root->right, value - 1);
}
int check(node *root, node *target, int value)
{
    if (root == NULL)
    {
        return -1;
    }
    if (root == target)
    {
        display(root, value);
        return 0;
    }
    int distanceleft = check(root->left, target, value);
    if (distanceleft != -1)
    {
        if (distanceleft + 1 == value)
        {
            cout << root->data << " ";
        }
        else
        {
            display(root->right, value - distanceleft - 2);
        }
        return 1 + distanceleft;
    }
    int distanceright = check(root->right, target, value);
    if (distanceright != -1)
    {
        if (distanceright + 1 == value)
        {
            cout << root->data << " ";
        }
        else
        {
            display(root->left, value - distanceright - 2);
        }
        return 1 + distanceright;
    }
    return -1;
}
int main()
{
    node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    check(root, root->left, 1);

    return 0;
}