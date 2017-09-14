/*
  Insert Node at the begining of a linked list
  Initially head pointer argument could be NULL for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
return back the pointer to the head of the linked list in the below method.
*/
Node* Insert(Node *head,int data)
{
  Node *newnode=new Node;
  newnode->next=NULL;
  newnode->data=data;
  if (head==NULL)//empty list
  {
      head=newnode;
  }
  else//all other cases
  {
    newnode->next=head;
    head=newnode;
  }
  return head;
}

