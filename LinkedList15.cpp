/*
   Reverse a doubly linked list, input list may also be empty
   Node is defined as
   struct Node
   {
     int data;
     Node *next;
     Node *prev;
   }
*/
Node* Reverse(Node* head)
{
    //goes from head to tail reversing the references
    Node* temp=new Node;
    temp->next=NULL;
    temp->prev=NULL;
    temp=head;
    //temp node to store the references temporarily
    Node*store=new Node;
  	store->next=NULL;
    store->prev=NULL;
    while(temp!=NULL)
    {
        store=temp->next;
        temp->next=temp->prev;
       	temp->prev=store;
        if(temp->prev==NULL)      //for last node whose next node was null and now previous node is null, 
            break;                //we break out of the loop without updating temp as otherwise temp would also be null
      	temp=temp->prev;
    }
    return temp;
}
