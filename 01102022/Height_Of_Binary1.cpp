#include <iostream>
//#include <cmath>
#include <algorithm>
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
        left = NULL;
        right = NULL;
    }
};
int traversal(node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int hmin = traversal(root->left);
    int hmax = traversal(root->right);
    return min(hmin, hmax) + 1;
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
    cout << traversal(root);

    return 0;
}