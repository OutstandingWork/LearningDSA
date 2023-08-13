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
int c=0;
int count(node* root)
{
    if(root==NULL) return 0;
    c++;
    return count(root->left)+count(root->right);
     

}
//Method to count nodesof complete binary tree in log(n) square
int count1(node* root)
{
    int lh=0;int rh=0;
    node* curr=root;
    while(curr!=NULL)
    {
        lh++;curr=curr->left;
    }
    while(curr!=NULL)
    {
        rh++;curr=curr->right;
    }
    if(lh==rh)
    return pow(2,rh)-1;
    else
    return (1+count1(root->left)+count1(root->right))
    ;
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
    count(root);
    cout<<c;
}