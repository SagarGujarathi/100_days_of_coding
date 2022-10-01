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
int search(int inorder[], int start, int end, int current)
{
    for (int i = start; i <= end; i++)
    {
        if (inorder[i] == current)
        {
            return i;
        }
    }

    return -1;
}
node *buildtree(int inorder[], int postorder[], int start, int end)
{
    if (start > end)
    {
        return NULL;
    }
    static int i = end;
    int current = postorder[i];
    node *n = new node(current);
    i--;
    if (start == end)
    {
        return n;
    }

    int position = search(inorder, start, end, current);
    n->right = buildtree(inorder, postorder, position + 1, end);
    n->left = buildtree(inorder, postorder, start, position - 1);
    return n;
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
    int inorder[a];
    int postorder[a];
    cout << endl
         << "Input inorder elements : ";
    for (int i = 0; i < a; i++)
    {
        cin >> inorder[i];
    }
    cout << endl
         << "Input postorder elements : ";
    for (int i = 0; i < a; i++)
    {
        cin >> postorder[i];
    }
    display(buildtree(inorder, postorder, 0, a - 1));
    return 0;
}