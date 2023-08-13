#include<iostream>
using namespace std;
struct node
{
    int data;
    node *next;
    node(int x)
    {
        data=x;
        next=NULL;
    }
};
node *insertBegin(node *head,int x)
{
    node *temp=new node(x);
    temp->next=head;
    return temp;
}
node *insertEnd(node *head,int x)
{
    node *temp=new node(x);
    node *curr=head; 
    if(head==NULL)
    return temp;


    while(curr->next!=NULL)
    {
        
        curr=curr->next;
    }
    curr->next=temp;
    return head;
}
void traverse(node *head)
{
    
    while(head!=NULL)
    {
        cout<<head->data<<endl;
        head=head->next;
    }
 }

 node* insertPos(node *head,int pos,int x)
 {
    int c=0;node *element=new node(x);
    node *curr=head;
    while(curr!=NULL)
    {
        c++;
        curr=curr->next;
    }
    if(pos<=c+1&&pos!=1)
    {
        c=1;curr=head;node* temp;
        while(c!=pos&&curr!=NULL)
        {
            temp=curr;
            curr=curr->next;c++;
        }
        temp->next=element;
        element->next=curr;
    }
    if(pos==1)
    {   node *temp;
        temp=insertBegin(head,x);
        return temp;
    }
    return head;
 }

 //insertion in sorted linked list
 node* Sorted(node *head,int x)
 {
    node* element=new node(x);
    if(head==NULL)
    return element;
    if(x<head->data)
    {
        element->next=head;
        return element;
    }
    node* curr=head;
    while(curr->next!=NULL)
    {
        if(x<curr->next->data)
        {
            node* temp=curr->next;
            curr->next=element;
            element->next=temp;
            break;
        }
        
        curr=curr->next;
    }
    return head;
 }

 //reversing linked list
 node* reverse(node* head)
 {
    node* curr=head;
    node* prev=NULL; node *front;
    

    while(curr!=NULL)
    {
       
        front=curr->next;
        curr->next=prev;
        prev=curr;
        curr=front;
    }
    return prev;
 }
node* RecReverse(node* curr,node* prev)
{
    if(curr==NULL)
    return prev;
    node* temp1=curr;
    curr=curr->next;
    node* temp2=prev;
    prev=temp1;
    temp1->next=temp2;
    return RecReverse(curr,prev);
}
node* duplicates(node* head)
{
    int i=head->data;
    node* curr=head;node* temp1=head;
    while(curr!=NULL)
    {
        if(curr->data!=i)
        {   
            i=curr->data;
            temp1->next=curr;
            temp1=curr;
        }
        curr=curr->next;
    }
    return head;
}
    
 
int main()
{
    node *head=new node(10);
    node *first=new node(50);
    head->next=first;
    head=insertBegin(head,3);
    head=insertBegin(head,3);
    head=insertBegin(head,2);
    
    head=duplicates(head);

    traverse(head);
    return 0;

}