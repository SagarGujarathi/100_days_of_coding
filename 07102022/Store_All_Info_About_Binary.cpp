#include <iostream>
//#include <cmath>
#include <algorithm>
#include <climits>
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
        left = NULL;
        right = NULL;
    }
};
struct Info
{
    int Min = INT_MAX;
    int Max = INT_MIN;
    int size = 0;
    bool bst = true;
};
Info info;
void BSTinfo(node *root)
{
    if (root == NULL)
    {
        return;
    }
    BSTinfo(root->left);
    BSTinfo(root->right);
    info.size += 1;
    if (root->left == NULL && root->left == NULL)
    {
        info.Max = max(root->data, info.Max);
        info.Min = min(root->data, info.Min);
    }
    else
    {
        if (root->left != NULL && root->right != NULL)
        {
            info.Max = max(root->data, max(info.Max, max(root->left->data, root->right->data)));
            info.Min = min(root->data, min(info.Min, min(root->left->data, root->right->data)));
            if (root->left->data >= root->data || root->right->data < root->data)
            {
                info.bst = false;
            }
        }
        else if (root->left != NULL)
        {
            info.Max = max(root->data, max(info.Max, root->left->data));
            info.Min = min(root->data, min(info.Min, root->left->data));
            if (root->left->data >= root->data)
            {
                info.bst = false;
            }
        }
        else
        {
            info.Max = max(root->data, max(info.Max, root->right->data));
            info.Min = min(root->data, min(info.Min, root->right->data));
            if (root->right->data < root->data)
            {
                info.bst = false;
            }
        }
    }
}
int main()
{

    node *root = new node(2);
    root->left = new node(7);
    root->right = new node(6);
    BSTinfo(root);
    cout << "Maximum data : " << info.Max << endl;
    cout << "Maximum data : " << info.Min << endl;
    cout << "Size : " << info.size << endl;
    if (info.bst)
    {
        cout << "It's BST" << endl;
    }
    else
    {
        cout << "It's not BST" << endl;
    }

    return 0;
}