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
	if((headA==NULL)&&(headB==NULL))
	{
		return NULL;
	}
	else if(headA==NULL)
	{
		return headB;
	}
	else if(headB==NULL)
	{
		return headA;
	}
	if ((headA->data) <= (headB->data))
	{
		headA->next=MergeLists(headA->next,headB);
	}
	else 
	{
		Node* newnode=headB;
		headB=headB->next;
		newnode->next=headA;
		headA = newnode; 	 
		headA->next = MergeLists(headA->next,headB);
	}
	return headA;
}
