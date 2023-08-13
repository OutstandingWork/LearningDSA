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
int height(node *root)
{
    if (root == NULL)
        return 0;
    else
        return max(height(root->left), height(root->right)) + 1;
}
void knode(node *root, int k)
{
    if (root == NULL)
        return;
    if (k == 0)
        cout << root->data << endl;
    knode(root->left, k - 1);
    knode(root->right, k - 1);
}
void LOT(node *root)
{
    if (root == NULL)
        return;
    queue<node *> q;
    q.push(root);
    while (q.empty() == false)
    {
        node *curr = q.front();
        q.pop();
        cout << curr->data << " ";
        if (curr->left != NULL)
            q.push(curr->left);
        if (curr->right != NULL)
            q.push(curr->right);
    }
}
void LOTLine(node *root)
{
    if (root == NULL)
        return;
    queue<node *> q;
    q.push(root);
    q.push(NULL);
    while (q.size() > 1)
    {
        node *curr = q.front();
        q.pop();
        if (curr == NULL)
        {
            cout << "\n";
            q.push(NULL);
            continue;
        }
        cout << curr->data << " ";
        if (curr->left != NULL)
            q.push(curr->left);
        if (curr->right != NULL)
            q.push(curr->right);
    }
}
int getSize(node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    else
        return (1 + getSize(root->left) + getSize(root->right));
}
int maxval(node *root)
{
    if (root == NULL)
        return INT_MIN;
    if (root->left == NULL && root->right == NULL)
        return root->data;
    else
        return max(maxval(root->left), maxval(root->right));
}

void printLView(node *root)
{
    if (root == NULL)
        return;

    if (root->left != NULL && root->right != NULL)
        cout << root->left->data << " ";
    if (root->left == NULL && root->right != NULL)
        cout << root->right->data << " ";
    if (root->left->left == NULL && root->left->right == NULL)
        printLView(root->right);
    else
        printLView(root->left);
}
void printLeft(node* root)
{
    if(root==NULL) return;
    queue<node*> q;
    q.push(root);
    while(q.empty()==false)
    {
        int count=q.size();
        for(int i=0;i<count;i++)
        {
            node* curr=q.front();
            q.pop();
            if(i==0)
            cout<<curr->data<<" ";
            if(curr->left!=NULL)
            q.push(curr->left);
            if(curr->right!=NULL)
            q.push(curr->right);
        }
    }

    
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
    printLView(root);
}
