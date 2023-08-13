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
bool findPath(node* root,vector<node*> &p,int n)
{
    if(root==NULL) return false;
    p.push(root);
    if(root->data==n) return true;
    if(findPath(root->left,p,n)||findPath(root->right,p,n)) return true;
    p.remove(p.size()-1);
    return false;
}
node* LCA(node* root,int n1,int n2)
{
    if(root==NULL) return false;
    vector<node*> path1,path2;
    if(findPath(root,path,n1)==false||findPath(root,path,n2)==false) return NULL;
    for(int i=0;i<(path1.size()-1)&&i<(path2.size()-1);i++)
    {
        if(path1[i+1]!=path2[i+1]) return path1[i];

    }
}
//Method 2 assumes that both n1 and n2 are there in tree
node *LCAM(node* root,int n1,int n2)
{
    if(root==NULL) return NULL;
    if(n1==root->data||n2==root->data) return root;
    node* lca1=LCAM(root->left,n1,n2);
    node* lca2=LCAM(root->right,n1,n2);
    if(lca1!=NULL&&lca2!=NULL) return root;
    if(lca1!=NULL) return lca1;
    else return lca2;


}