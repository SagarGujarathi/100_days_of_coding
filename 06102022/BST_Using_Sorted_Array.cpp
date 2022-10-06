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
        insert(root->left, value);
    }
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
    int array[a];
    cout << endl
         << "Input elements : ";
    for (int i = 0; i < a; i++)
    {
        cin >> array[i];
    }
    node *root = new node(array[a / 2]);
    for (int i = (a / 2) - 1; i >= 0; i--)
    {
        insert(root, array[i]);
    }
    for (int i = (a / 2) + 1; i < a; i++)
    {
        insert(root, array[i]);
    }
    display(root);

    return 0;
}
