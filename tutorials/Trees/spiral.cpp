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
void spiral(node *root)
{
    if (root == NULL)
        return;
    queue<node *> q;
    stack<int> s;int cnull=0;
    q.push(root);
    q.push(NULL);
    while (q.size() > 1)
    {
        node *curr = q.front();
        q.pop();
        if (curr == NULL)
        {
            cnull++;
            cout << "\n";
            q.push(NULL);
            
            continue;
        }
        if(cnull%2==0)
        cout << curr->data << " ";
        else 
        s.push(curr->data);
        if (curr->left != NULL)
            q.push(curr->left);
        if (curr->right != NULL)
            q.push(curr->right);

            while(s.empty()==false){
    cout<<s.top()<<" ";
    s.pop();
    }
    }
    
    
}
//method 2 to print spiral
void printSpiral(node *root){
    if (root == NULL) 
        return;  

    stack<node*> s1;  
    stack<node*> s2;  
  
    s1.push(root); 
  
    while (!s1.empty() || !s2.empty()) { 
        while (!s1.empty()) { 
            node* temp = s1.top(); 
            s1.pop(); 
            cout << temp->key << " "; 
  
            if (temp->right) 
                s2.push(temp->right); 
            if (temp->left) 
                s2.push(temp->left); 
        } 
        
        while (!s2.empty()) { 
            node* temp = s2.top(); 
            s2.pop(); 
            cout << temp->key << " "; 
  
            if (temp->left) 
                s1.push(temp->left); 
            if (temp->right) 
                s1.push(temp->right); 
        } 
    } 
}  
int main() {
	
	node *root=new node(20);
	root->left=new node(8);
	root->right=new node(12);
	root->right->left=new node(3);
	root->right->right=new node(7);
    spiral(root);
}