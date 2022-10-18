#include <iostream>
#include <map>
#include <vector>
#include <iterator>
//#include <cmath>
//#include <algorithm>
//#include <climits>
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
map<int, vector<int>> a;
void check(node *root, int count)
{
    if (root == NULL)
    {
        return;
    }
    a[count].push_back(root->data);
    check(root->left, count - 1);
    check(root->right, count + 1);
}
void display(map<int, vector<int>> a)
{
    for (auto b : a)
    {
        for (int i = 0; i < (b.second).size(); i++)
        {
            cout << b.second[i] << " ";
        }
    }
    return;
}

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
int main()
{
    node *root = NULL;
    insert(root, 10);
    insert(root, 8);
    insert(root, 12);
    insert(root, 1);
    insert(root, 2);
    insert(root, 3);
    insert(root, 4);
    check(root, 0);
    display(a);

    return 0;
}