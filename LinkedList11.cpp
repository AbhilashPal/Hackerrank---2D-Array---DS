/*
  Remove all duplicate elements from a sorted linked list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/

Node* RemoveDuplicates(Node *head)
{
  Node* temp=new Node;
  temp = head;
  Node* tempest=new Node;
  while(temp->next!=NULL)                                     //temp goes from head to last node.
  {    
    tempest=temp->next;                                       //tempest is a pointer that goes from temp to another node after.
    while(tempest->data==temp->data&&tempest->next!=NULL)     //temp till tempest's data isn't the same as temp's data.
    {
      tempest=tempest->next;      
    }
    if(tempest->data==temp->data)                             //for case where till last node is traversed and last node value
    {                                                         //is same as temp's value.
      temp->next=NULL;
    }
    else                                                      //God is dead :)
    {
        temp->next=tempest;                                   //just the iterative case.
        temp=temp->next;
    }
    
  }
  return head;                                                //And we have killed him. :")
