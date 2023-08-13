#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *left;
    node *right;
    node(int x)
    {
        data = x;
        left = NULL;
        right = NULL;
    }
};
int maxWidth(node *root)
{
    if (root == NULL)
        return 0;
    queue<node *> q;
    q.push(root);int Max=0;
    while (q.empty() == false)
    {
        int count=q.size();
        Max=max(count,Max);
        // for(int i=0;i<count;i++)
        // {
        node *curr = q.front();
        q.pop();
        
        if (curr->left != NULL)
            q.push(curr->left);
        if (curr->right != NULL)
            q.push(curr->right);
    // }
    }
    return Max;
}
int main()
{

    node *root = new node(10);
    root->left = new node(20);
    root->right = new node(30);
    root->left->left = new node(40);
    root->left->right = new node(50);
    root->right->right = new node(70);
    root->right->right->right = new node(80);
    cout<<maxWidth(root);
}
