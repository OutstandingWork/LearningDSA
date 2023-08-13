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
        return (1+max(height(root->left), height(root->right)));
}

//Naive method to compute diameter
// int diameter(node* root)
// {
//     if(root==NULL) return 0;
    
//     int d1=1+height(root->left)+height(root->right);
//     int d2=diameter(root->left);
//     int d3=diameter(root->right);
//     return max(d1,max(d2,d3));
// }
//Method 2 is to modify the height function as
int res=0;
int heightM(node *root)
{
    if (root == NULL)
        return 0;
    int lh=heightM(root->left);int rh=heightM(root->right);
    res=max(res,(1+lh+rh));
        return max(heightM(root->left), heightM(root->right)) + 1;
}
//Method going on in my mind
// int diameter(node* root)
// {
//     if(root==NULL) return 0;
//     if(root->left!=NULL&&root->right!=NULL&&root->left->left==NULL&&root->left->right==NULL) return 3;
//     if(root->left!=NULL&&root->right!=NULL&&(root->left->left!=NULL||root->left->right!=NULL)) return 4;
//     //return max((1+diameter(root->left)+diameter(root->right)),max(diameter(root->left),diameter(root->right)));


// }
int main() {
	
	node *root=new node(20);
	root->left=new node(8);
	root->right=new node(12);
	root->right->left=new node(3);
	root->right->right=new node(7);
    cout<<diameter(root);
}