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
void check(node *root, int N1, int N2)
{
    queue<node *> array;
    int count = 0;
    int answer = 0;
    array.push(root);
    array.push(NULL);
    while (!array.empty())
    {
        node *front = array.front();

        array.pop();
        if (front != NULL)
        {
            if (front->data == N1)
            {
                answer += count;
            }
            else if (front->data == N2)
            {

                answer += count;
            }
            if (front->left != NULL)
            {
                array.push(front->left);
            }
            if (front->right != NULL)
            {
                array.push(front->right);
            }
        }
        else if (front == NULL && !array.empty())
        {
            count++;
            array.push(NULL);
        }
    }
    cout << answer;
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
    check(root, 6, 7);

    return 0;
}