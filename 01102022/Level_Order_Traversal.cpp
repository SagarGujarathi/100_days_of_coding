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
void traversal(node *root)
{
    queue<node *> a;
    a.push(root);
    a.push(NULL);
    while (!a.empty())
    {
        node *temp = a.front();
        a.pop();
        if (temp != NULL)
        {
            cout << temp->data << " ";
            if (temp->left != NULL)
            {
                a.push(temp->left);
            }
            if (temp->right != NULL)
            {
                a.push(temp->right);
            }
        }
    }
    return;
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
    cout << "Gimme level : ";
    int level;
    cin >> level;
    traversal(root);

    return 0;
}