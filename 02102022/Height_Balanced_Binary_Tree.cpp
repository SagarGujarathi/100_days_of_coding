#include <iostream>
//#include <cmath>
//#include <algorithm>
//#include <climits>
#include <vector>
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
queue<node *> array;
vector<int> temp;
void insert(node *&root, int value)
{
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
void display(node *root)
{
    if (root == NULL)
    {
        return;
    }
    display(root->left);
    temp.push_back(root->data);
    cout << root->data << " ";
    display(root->right);
}
void empty()
{
    while (!array.empty() || !temp.empty())
    {
        if (!array.empty())
        {
            array.pop();
        }
        if (!temp.empty())
        {
            temp.pop_back();
        }
    }
    return;
}
int main()
{
    node *root = NULL;
    insert(root, 1);
    insert(root, 2);
    insert(root, 3);
    insert(root, 4);
    insert(root, 5);
    insert(root, 6);
    insert(root, 7);
    display(root);
    if (temp.size() % 2 == 1 && temp[temp.size() / 2] == root->data)
    {
        cout << endl
             << "Balanced binary tree" << endl;
    }
    else
    {
        cout << endl
             << "Unbalanced binary tree" << endl;
    }
    empty();
    return 0;
}