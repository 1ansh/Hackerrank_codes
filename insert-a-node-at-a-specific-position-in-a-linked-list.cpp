/*
  Insert Node at a given position in a linked list 
  head can be NULL 
  First element in the linked list is at position 0
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* InsertNth(Node *head, int data, int position)
{
    Node* temp;
	temp=new Node();
	temp->data=data;
	if(position==0)
	{
		temp->next=head;
		head=temp;
	}
	else
	{
		Node* temp2=head;
		for(int i=0;i<position-1;i++)
		{
			temp2=temp2->next;
		}
		temp->next=temp2->next;
		temp2->next=temp;
        
	}
    return head;
}
