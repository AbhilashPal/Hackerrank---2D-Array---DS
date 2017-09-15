/*
  Compare two linked lists A and B
  Return 1 if they are identical and 0 if they are not. 
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
int CompareLists(Node *headA, Node* headB)
{
    int f=1;
    Node *A=new Node;
    Node *B=new Node;
    A=headA; B=headB;
    if((A==NULL&&B!=NULL)||(A!=NULL&&B==NULL))
    {
        return 0;
    }
    else{
        while(A->next!=NULL&&B->next!=NULL)
        {
            if(A->data!=B->data)
            {
                f=0;                //O means not same
                break;              //one discrepancy and it breaks
            }
            else{
              A=A->next;
              B=B->next;
            }
        }
        if(A->next==NULL&&B->next!=NULL){         // These two cases
            return 0;
        }
        if(B->next==NULL&&A->next!=NULL){         // take care when one list ends and the other doesn't and still both are      
            return 0;                             // same till that point                             
        }
        if(A->next==NULL&&B->next==NULL){         //for single element lists
            if(A->data==B->data)
            {
                return 1;
            }
            else{
                return 0;
            }
        }
        if(f==1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }

}
