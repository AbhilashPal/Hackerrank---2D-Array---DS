/*
   Find merge point of two linked lists
   Node is defined as
   struct Node
   {
       int data;
       Node* next;
   }
*/
int FindMergeNode(Node *headA, Node *headB)
{
    Node* A=new Node;                           //Let's take an example
    Node* B=new Node;                           // headA->6->25->1->2->3->4
    A=headA;                                    //                          ->5->6->7->8->NULL
    B=headB;                                    //            headB->2->4->6
    while(A!=B)                                 //A goes through to NULL from headA and likewise B goes from headB to NULL
    {                                           //if it encounters same nodes, it stops. Now by this method, lets take 
      if(A->next==NULL)                         //length(6,25,1,2,3,4)=x=6   length(5,6,7,8)=y=4   length(2,4,6)=z=3   
      {                                         //if A becomes null, then it is redirected to headB and similiarly B to headA
        A=headB;                                //thus in 2nd iteration, both will cover till the common node
      }                                         //for A, distance= x+y+z=13 and for B, distance = z+y+x=13. Thus, 
      else                                      //no matter what the config, after the 2nd iteration they WILL meet.
      {
        A=A->next;
      }
      if(B->next==NULL)
      {
        B=headA;
      }
      else
      {
        B=B->next;
      }
    }
    return A->data;
}
