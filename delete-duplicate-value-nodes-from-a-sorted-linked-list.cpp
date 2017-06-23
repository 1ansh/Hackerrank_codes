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
	if(head==NULL)
	{
		return head;
	}
	Node* prev=head;
	Node* curr=head->next;
	while(curr!=NULL)
	{
		if(curr->data==prev->data)
		{
			prev->next=curr->next;
			delete curr;
			curr=prev->next;
		}
		else
		{
			prev=curr;
			curr=curr->next;
		}
	}
	return head;
}

