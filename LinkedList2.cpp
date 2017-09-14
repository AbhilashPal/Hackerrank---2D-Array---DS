/*
  Insert Node at the end of a linked list 
  head pointer input could be NULL as well for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Insert(Node *head,int n)
{
  Node *newnode=new Node;
  newnode->next=NULL;
  newnode->data=n;
  if (head==NULL)//empty list
  {
      head=newnode;
  }
  else//all other cases
  {
    
    Node*temp=head;
    while(temp->next!=NULL)
    {
      temp=temp->next;
    }
    temp->next=newnode;
  }
  return head;
}
