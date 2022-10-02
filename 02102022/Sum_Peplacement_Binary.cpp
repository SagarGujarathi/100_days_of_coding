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
        left = NULL;
        right = NULL;
    }
};

void insert(node *&root, int value)
{
    static queue<node *> array;
    if (root == NULL)
    {
        root = new node(value);
        array.push(root);
        return;
    }
    node *front = array.front();
    if (front->left == NULL)
    {
        front->left = new node(value);
        array.push(front->left);
    }
    else if (front->right == NULL)
    {
        front->right = new node(value);
        array.push(front->right);
    }
    if (front->left != NULL && front->right != NULL)
    {
        array.pop();
    }
    return;
}
void sumreplacement(node *root)
{
    if (root == NULL)
    {
        return;
    }
    sumreplacement(root->left);
    sumreplacement(root->right);
    if (root->left != NULL)
    {
        root->data += root->left->data;
    }
    if (root->right != NULL)
    {
        root->data += root->right->data;
    }
    cout << root->data << " ";
}

int main()
{
    node *root = NULL;
    for (int i = 1; i <= 7; i++)
    {
        insert(root, i);
    }
    sumreplacement(root);

    return 0;
}