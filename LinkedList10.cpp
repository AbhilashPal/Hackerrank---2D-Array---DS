/*
  Get Nth element from the end in a linked list of integers
  Number of elements in the list will always be greater than N.
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
int GetNode(Node *head,int positionFromTail)
{
  Node* temp =new Node;
  temp=head;
  int l=0;                        //will store the length after traversing
  while(temp->next!=NULL)
  {
    temp=temp->next;
    l++;
  }
  temp=head;                      //traversing again and stoptting at (Length-pos)
  int c=0;
  while(c!=l-positionFromTail)
  {
    temp=temp->next;
    c++;
  }
  return temp->data;
}
