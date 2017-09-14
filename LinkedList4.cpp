/*
  Insert Node at a given position in a linked list 
  head can be NULL 
  First element in the linked list is at position 0
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* InsertNth(Node *head, int data, int position)
{
  int count=position;
  Node *newnode=new Node;
  newnode->next=NULL;
  newnode->data=data;
  if (count==0)
  {
    newnode->next=head;
    head=newnode;
  }
  else
  {
    count=0;
    Node *temp=new Node;
    temp=head;
    while(count<position-1)
    {
      temp=temp->next;
      count++;
    }
    newnode->next=temp->next;
    temp->next=newnode;
  }
  return head;
}
