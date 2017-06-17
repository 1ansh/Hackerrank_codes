/*
  Merge two sorted lists A and B as one linked list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
void push_back(Node** head,int x)
{
	Node* temp;
	temp=new Node();
	temp->data=x;
	temp->next=NULL;
	if(*head==NULL)
	{
		*head=temp;
		return;
	}
	Node* temp2=*head;
	while(temp2->next!=NULL)
	{
		temp2=temp2->next;
	}
	temp2->next=temp;
}
Node* MergeLists(Node *head1, Node* head2)
{
	Node* res=NULL;
	while(head1!=NULL && head2!=NULL)
	{
		if(head1->data<=head2->data)
		{
			push_back(&res,head1->data);
			head1=head1->next;
		}
		else
		{
			push_back(&res,head2->data);
			head2=head2->next;
		}
	}
	while(head1!=NULL)
	{
		push_back(&res,head1->data);
		head1=head1->next;
	}
	while(head2!=NULL)
	{
		push_back(&res,head2->data);
		head2=head2->next;
	}
	return res;
}

