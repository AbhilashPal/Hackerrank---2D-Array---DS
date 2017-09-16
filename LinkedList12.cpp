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
    Node* temp=new Node;
    temp=head;
    while(temp!=NULL)
    {
    	temp=temp->next;
    	count++;
      if(count>100)
      {
        return true;
      }
    }
    return false;
}
