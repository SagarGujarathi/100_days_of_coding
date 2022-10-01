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
void search(node *root, int level)
{
    queue<node *> a;
    int count = 0;
    int answer = 0;
    a.push(root);
    a.push(NULL);
    while (!a.empty())
    {
        node *temp = a.front();
        a.pop();
        if (temp != NULL)
        {
            if (count == level)
            {
                answer += temp->data;
            }
            if (temp->left != NULL)
            {
                a.push(temp->left);
            }
            if (temp->right != NULL)
            {
                a.push(temp->right);
            }
        }
        else if (!a.empty())
        {
            a.push(NULL);
            count++;
            if (count > level)
            {
                cout << "The sum of elements in " << level << " level : " << answer;
                return;
            }
        }
    }
    cout << "The sum of elements in " << level << " level : " << answer;
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
    search(root, level);

    return 0;
}