/*
    Insert Node in a doubly sorted linked list 
    After each insertion, the list should be sorted
   Node is defined as
   struct Node
   {
     int data;
     Node *next;
     Node *prev;
   }
*/



Node* SortedInsert(Node *head,int data)
{
    //newnode is the node that is inserted, whether at head or elsewhere 
    Node* newnode=new Node;
    newnode->data=data;
    newnode->next=NULL;
    newnode->prev=NULL;
    //new node made, now checking for base condition.
    if (head==NULL)
    {
        head=newnode;
        return head;
    }
    //else if head's next element is null
    else if(head->next==NULL)
    {
        if(head->data>data)
        {
            head->prev=newnode;
            newnode->next=head;
            return newnode;
        }
        else{
            head->next=newnode;
            newnode->prev=head;
            return head;
        }
    }
    else
    {
        //the looping condition. starts from fucking head's next node.
        Node* temp= new Node;
        temp->next=NULL;
        temp->prev=NULL;
        temp=head;
        //go !
        while(temp->next!=NULL&&temp->next->data<data)
        {
            temp=temp->next;
        }
        //if loop iterates to null at end of loop.
        if(temp->next==NULL) 
        {
            temp->next=newnode;
            newnode->prev=temp;
        }
        //if it fucking doesn't
        else
        {
            temp->next->prev=newnode;
            newnode->next=temp->next;
            temp->next=newnode;
            newnode->prev=temp;
        }

        return head;
        
    }
}
