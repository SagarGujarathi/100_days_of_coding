#include <iostream>
//#include <cmath>
//#include <algorithm>
//#include <climits>
#include <vector>
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
vector<node *> constructtrees(int start, int end)
{

    vector<node *> trees;
    if (start > end)
    {
        trees.push_back(NULL);
        return trees;
    }
    for (int i = start; i <= end; i++)
    {
        vector<node *> leftsubtree = constructtrees(start, i - 1);
        vector<node *> rightsubtree = constructtrees(i + 1, end);
        for (int j = 0; j < leftsubtree.size(); j++)
        {
            node *left1 = leftsubtree[j];
            for (int k = 0; k < rightsubtree.size(); k++)
            {
                node *right1 = rightsubtree[k];
                node *nodes = new node(i);
                nodes->left = left1;
                nodes->right = right1;
                trees.push_back(nodes);
            }
        }
    }
    return trees;
}
void preorder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

int main()
{
    vector<node *> abc = constructtrees(1, 10);
    while (!abc.empty())
    {
        preorder(abc.back());
        abc.pop_back();
        cout << endl;
    }

    return 0;
}