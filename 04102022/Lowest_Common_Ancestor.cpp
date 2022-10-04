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

node *LCA(node *root, int n1, int n2)
{
    if (root == NULL)
    {
        return NULL;
    }
    if (root->data == n1 || root->data == n2)
    {
        return root;
    }
    node *lcaleft = LCA(root->left, n1, n2);
    node *lcaright = LCA(root->right, n1, n2);
    if (lcaleft != NULL && lcaright != NULL)
    {
        return root;
    }
    if (lcaleft != NULL)
    {
        return lcaleft;
    }
    return lcaright;
}
int main()
{
    node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    node *answer = LCA(root, 4, 3);
    if (LCA == NULL)
    {
        cout << "Not found!" << endl;
    }
    else
    {
        cout << "LCA : " << answer->data;
    }

    return 0;
}