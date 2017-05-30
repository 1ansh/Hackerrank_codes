/*
  Delete Node at a given position in a linked list 
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Delete(Node *head, int position)
{
  Node* temp=head;
	if(position==0)
	{
		head=temp->next;
		delete temp;
	}
	else
	{
		for(int i=0;i<position-1;i++)
		{
			temp=temp->next;
		}
		Node* temp2=temp->next;
		temp->next=temp2->next;
		delete temp2;
	}
    return head;
}

