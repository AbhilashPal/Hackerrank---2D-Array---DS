/*
  Print elements of a linked list on console 
  head pointer input could be NULL as well for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
void Print(Node* head)
{
  Node* temp=new Node;
  temp->next=head;
  if(head!=NULL)
  {
  while(temp->next!=NULL)
  {
    if(temp->data!=0){
        cout<<(temp->data)<<endl;
    }
    temp=temp->next;
  }
  cout<<temp->data<<endl;
  }
}
