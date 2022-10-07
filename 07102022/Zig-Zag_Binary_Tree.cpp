#include <iostream>
#include <queue>
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
void insert(node *&root, int value)
{
    if (root == NULL)
    {
        root = new node(value);
        return;
    }
    if (value < root->data)
    {
        insert(root->left, value);
    }
    else
    {
        insert(root->right, value);
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
void edit(node *root)
{
    if (root == NULL)
    {
        return;
    }

    bool check = true;
    queue<node *> a;
    a.push(root);
    a.push(NULL);
    while (!a.empty())
    {
        node *front = a.front();
        a.pop();
        if (front != NULL)
        {
            cout << front->data << " ";
            if (!check)
            {
                if (front->left != NULL)
                {
                    a.push(front->left);
                }
                if (front->right != NULL)
                {
                    a.push(front->right);
                }
            }
            else
            {
                if (front->right != NULL)
                {
                    a.push(front->right);
                }
                if (front->left != NULL)
                {
                    a.push(front->left);
                }
            }
        }
        else if (!a.empty())
        {
            check = !check;
            a.push(NULL);
        }
    }
    return;
}
int main()
{
    node *root = NULL;
    // insert(root, 12);
    // insert(root, 9);
    // insert(root, 15);
    // insert(root, 5);
    // insert(root, 10);
    root = new node(12);
    root->left = new node(9);
    root->right = new node(15);
    root->left->left = new node(5);
    root->left->right = new node(10);
    display(root);
    cout << endl;
    edit(root);
    // display(root);

    return 0;
}