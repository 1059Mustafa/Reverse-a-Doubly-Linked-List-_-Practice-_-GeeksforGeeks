Node* reverseDLL(Node * head)
{
    Node*curr=head;
    Node*temp=NULL;
    
    if(head==NULL || head->next==NULL)
       return head;
       
    while(curr)
    {
        temp=curr->prev;
        curr->prev=curr->next;
        curr->next=temp;
        curr=curr->prev;
    }
    
    head=temp->prev;
    return head;
}
