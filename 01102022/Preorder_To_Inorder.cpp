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
        left = NULL;
        right = NULL;
    }
};
int search(int inorder[], int start, int end, int current)
{
    for (int i = start; i <= end; i++)
    {
        if (inorder[i] == current)
        {
            return i;
        }
    }
    return -1;
}

node *buildtree(int preorder[], int inorder[], int start, int end)
{
    if (start > end)
    {
        return NULL;
    }
    static int id = 0;

    int current = preorder[id];
    id++;
    node *n = new node(current);

    if (start == end)
    {
        return n;
    }
    int position = search(inorder, start, end, current);
    n->left = buildtree(preorder, inorder, start, position - 1);
    n->right = buildtree(preorder, inorder, position + 1, end);
    return n;
}
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
int main()
{
    int a;
    cout << "Gimme size of array : ";
    cin >> a;
    cout << endl
         << "Input preorder elements : ";
    int preorder[a];
    int inorder[a];
    for (int i = 0; i < a; i++)
    {
        cin >> preorder[i];
    }
    cout << endl
         << "Input inorder elements : ";
    for (int i = 0; i < a; i++)
    {
        cin >> inorder[i];
    }
    node *root = buildtree(preorder, inorder, 0, a - 1);
    display(root);

    return 0;
}