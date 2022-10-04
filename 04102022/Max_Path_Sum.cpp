#include <iostream>
//#include <cmath>
#include <algorithm>
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
        left = right = NULL;
    }
};
int answer = 0;
void display(node *root, int value)
{
    if (root == NULL)
    {
        answer = max(answer, value);
        return;
    }
    display(root->left, (value + (root->data)));
    display(root->right, (value + (root->data)));
}

int main()
{
    node *root = new node(1);
    root->left = new node(-12);
    root->right = new node(3);
    root->left->left = new node(4);
    root->right->left = new node(5);
    root->right->right = new node(-6);
    display(root, 0);
    cout << "Maximum path sum : " << answer;

    return 0;
}
