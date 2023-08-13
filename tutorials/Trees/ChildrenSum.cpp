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
bool childSum(node* root)
{
    if(root==NULL) return true;
    if(root->left==NULL&&root->right==NULL) return true;
    if(((root->left->data)+(root->right->data))==root->data)
    {
        return(childSum(root->left)&&childSum(root->right));
    }
    else if((root->left)==NULL&&(root->right->data==root->data))
    return(childSum(root->right));
    else if((root->right)==NULL&&(root->left->data==root->data))
    return(childSum(root->left));
    else
    return false;
}
int main() {
	
	node *root=new node(20);
	root->left=new node(8);
	root->right=new node(12);
	root->right->left=new node(3);
	root->right->right=new node(7);
	
	cout<<childSum(root);
}