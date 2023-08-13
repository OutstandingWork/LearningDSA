if(curr->next==NULL)
    {
       node* temp=curr->prev;
        curr->prev=NULL;
        curr->next=temp;
    }