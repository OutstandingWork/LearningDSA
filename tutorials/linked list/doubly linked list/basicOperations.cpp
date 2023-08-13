#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node* next;
    node* prev;
    node(int d)
    {
        data=d;
        prev=next=NULL;
    }
};
node* insertEnd(node* head,int data)
{
    node* temp=new node(data);
    if(head==NULL)
    head=temp;

    else{
        node* curr=head;
        while(curr->next!=NULL)
        {
            curr=curr->next;
        }
        curr->next=temp;
        temp->prev=curr;
    }
    return head;
}

node* reverse(node* head)
{
   node* reverse(node* head);

    if(head==NULL||head->next==NULL) return head;
    node* prev=NULL;node* curr=head;
    while(curr!=NULL)
    {
        prev=curr->prev;
        curr->prev=curr->next;
        curr->next=prev;
        curr=curr->prev;
    }
    return prev->prev;


    
    return head;
}

node* deleteEnd(node* head)
{
    if(head==NULL) return NULL;
    if(head->next==NULL) {delete head; return NULL; }
    node* curr=head;
    while(curr->next!=NULL) {curr=curr->next;}
    node* temp=curr;
    curr=curr->prev;
    delete temp;
    curr->next=NULL;
    return head;
}
void printlist(node *head){
    node *curr=head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }cout<<endl;
}


    int main() 
{ 
	node *head=new node(10);
	// node *temp1=new node(20);
	// node *temp2=new node(30);
	// head->next=temp1;
	// temp1->prev=head;
	// temp1->next=temp2;
	// temp2->prev=temp1;
    
	//head=insertEnd(head,40);
	printlist(head);
    head=deleteEnd(head);
    printlist(head);

	return 0;
} 
