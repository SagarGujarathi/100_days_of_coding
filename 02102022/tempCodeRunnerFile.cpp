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
void check(node *root)
{
    queue<node *> array;
    array.push(root);
    array.push(NULL);
    bool temp = false;
    while (!array.empty())
    {
        node *front = array.front();
        if (temp)
        {
            array.push(NULL);
        }
        array.pop();
        if (array.front() == NULL)
        {
            cout << front->data << " ";
            temp = true;
        }
        else
        {
            temp = false;
        }
        if (front != NULL && root != NULL)
        {
            if (front->right != NULL)
            {
                array.push(front->right);
            }
            if (front->left != NULL)
            {
                array.push(front->left);
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

    check(root);

    return 0;
}