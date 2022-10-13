#include <iostream>
#include <vector>
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
vector<node *> a;
void RBST(node *root)
{
    if (root == NULL)
    {
        return;
    }
    if (root->left != NULL && root->left->data >= root->data)
    {
        a.push_back(root->left);
    }
    if (root->right != NULL && root->right->data < root->data)
    {
        a.push_back(root->right);
    }
    RBST(root->left);
    RBST(root->right);
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
    node *root = new node(5);
    root->left = new node(6);
    root->right = new node(4);
    display(root);
    RBST(root);
    int temp1 = a[0]->data;
    a[0]->data = a[1]->data;
    a[1]->data = temp1;
    cout << endl;
    display(root);

    return 0;
}