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
        left = right = NULL;
    }
};
void IBST(node *root1, node *root2)
{
    if (root1 == NULL || root2 == NULL)
    {
        cout << "These are not identical BST's" << endl;
        return;
    }

    queue<node *> a;
    queue<node *> b;
    a.push(root1);
    a.push(NULL);
    b.push(root2);
    b.push(NULL);
    while (!a.empty() || !b.empty())
    {
        node *front1 = a.front();
        node *front2 = b.front();
        a.pop();
        b.pop();
        if (front1 != NULL || front2 != NULL)
        {
            if (front2 == NULL || front2 == NULL || front1->data != front2->data)
            {
                cout << "These are not identical BST's" << endl;
                return;
            }
            if (front1->left != NULL || front2->left != NULL)
            {
                if (front2->left == NULL || front2->left == NULL)
                {
                    cout << "These are not identical BST's" << endl;
                    return;
                }
                a.push(front1->left);
                b.push(front2->left);
            }
            if (front1->right != NULL || front2->right != NULL)
            {
                if (front2->right == NULL || front2->right == NULL)
                {
                    cout << "These are not identical BST's" << endl;
                    return;
                }
                a.push(front1->right);
                b.push(front2->right);
            }
        }
        else if (!a.empty() || !b.empty())
        {
            a.push(NULL);
            b.push(NULL);
        }
    }
    cout << "It's identical!" << endl;
    return;
}

int main()
{
    node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    node *root1 = new node(1);
    root1->left = new node(2);
    root1->right = new node(4);
    IBST(root1, root);

    return 0;
}