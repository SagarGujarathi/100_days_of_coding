#include <iostream>
//#include <cmath>
//#include <algorithm>
//#include <climits>
//#include <vector>
//#include <queue>
//#include <deque>
//#include <stack>
using namespace std;
int count = 0;

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
int sumcount(node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    count += root->data;
    cout << root->data << " ";
    return sumcount(root->left) + sumcount(root->right) + 1;
}

int main()
{
    node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(9);
    int temp = sumcount(root);
    cout << endl
         << "Number of Nodes : " << temp;
    cout << endl
         << "Sum of elements : " << count;

    return 0;
}