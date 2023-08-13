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
int preIndex=0;
node* createBT(int in[],int pre[],int is,int ie)
{
    if(is>ie) return NULL;
    node* root=new node(pre[preIndex++]);

    int inIndex;
    for(int i=is;i<=ie;i++)
    {
        if(in[i]==root->data){
            inIndex=i;
            break;
        }
    }
    root->left=createBT(in,pre,is,inIndex-1);
    root->right=createBT(in,pre,inIndex+1,ie);
    return root;
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
int main() {
	
	int in[]={20,10,40,30,50};
	int pre[]={10,20,30,40,50};
	int n=sizeof(in)/sizeof(in[0]);
	node *root=createBT(in, pre, 0, n-1);
    LOTLine(root);
}