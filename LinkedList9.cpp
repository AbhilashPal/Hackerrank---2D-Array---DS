/*
  Merge two sorted lists A and B as one linked list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* MergeLists(Node* headA, Node* headB)
{
	if((headA==NULL)&&(headB==NULL)) 			//case of empty lists
	{
		return NULL;
	}
	else if(headA==NULL)					//base case for when A is finished 
	{
		return headB;
	}
	else if(headB==NULL)					//base case for when B is finished 
	{
		return headA;
	}
	if ((headA->data) <= (headB->data))			//if A.data<B.data then it points A.next to MergedList of 
	{							//rest of A elements and B elements
		headA->next=MergeLists(headA->next,headB);
	}
	else 
	{
		Node* newnode=headB;				//if B.data<A.data, newnode will store the B node to be
		headB=headB->next;				//inserted into the list. B is incremented.
		newnode->next=headA;				//The node is made to point to A's node.
		headA = newnode; 	 			//As we are returning A, A now points to A through newnode.
		headA->next = MergeLists(headA->next,headB);	//and the process continues as A's next elements, meaning
	}							//newnodes next elements are Mergesorted with rest of B							
	return headA;						//head pointer returned.
}
