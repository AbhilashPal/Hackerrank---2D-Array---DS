/*
  Reverse a linked list and return pointer to the head
  The input list will have at least one element  
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/

Node* Reverse(Node *head)               //recursive solution, creates a return stack and goes on reversing references
{
  if(head==NULL||head->next==NULL)
  {
    return head;                        //case of last node
  }
  else{
    Node* remaining=new Node;           //points to reversed elements after given node
    remaining=Reverse(head->next);       
    head->next->next=head;              //head's next pointer will now point to head
    head->next=NULL;                    //head points nowhere. 
    return remaining;
  }
}

