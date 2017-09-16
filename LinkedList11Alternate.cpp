/*
Detect a cycle in a linked list. Note that the head pointer may be 'NULL' if the list is empty.

A Node is defined as: 
    struct Node {
        int data;
        struct Node* next;
    }
*/

bool has_cycle(Node* head) {
    //given length <= 100
    int count=0;
    Node* tempslow=new Node;                        //slow moves one node at a time and fast two nodes at a time. If a loop
    Node* tempfast=new Node;                        //exists, they must meet. If they meet, we return true.
    tempfast=head;
    tempslow=head;
    while(tempslow!=NULL&&tempfast!=NULL)
    {
    	tempslow=tempslow->next;
    	tempfast=tempfast->next->next;
      	if(tempfast==tempslow)
      	{
        	return true;
      	}
    }
    return false;
}
