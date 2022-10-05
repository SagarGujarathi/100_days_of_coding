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

node *insert(node *root, int value)
{
    if (root == NULL)
    {
        return new node(value);
    }
    if (value < root->data)
    {
        root->left = insert(root->left, value);
    }
    else
    {
        root->right = insert(root->right, value);
    }
    return root;
}
bool check = false;
void search(node *root, int key)
{
    if (root == NULL)
    {
        return;
    }
    if (root->data == key)
    {
        check = true;
        return;
    }
    if (key < root->data)
    {
        search(root->left, key);
    }
    else
    {
        search(root->right, key);
    }
}
int main()
{
    node *root = NULL;
    root = insert(root, 1);
    insert(root, 2);
    insert(root, 3);
    insert(root, 4);
    insert(root, 5);
    insert(root, 6);
    insert(root, 7);
    search(root, 3);
    if (check)
    {
        cout << "Given key exists in binary tree" << endl;
    }
    else
    {
        cout << "Given key does not exists in binary tree" << endl;
    }

    return 0;
}