/*
  Delete Node at a given position in a linked list 
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Delete(Node *head, int position)
{
  int count;
  if(position==0)
  {
    head=head->next;
  }
  else
  {
    count=0;
    Node* temp=new Node;
    temp=head;
    Node* ptemp=new Node;
    ptemp=head;
    while(count<position)
    {
      ptemp=temp;
      temp=temp->next;
      count++;
    }
    ptemp->next=temp->next;
  }
  return head;
}
