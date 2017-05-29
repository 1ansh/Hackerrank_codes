/*
  Insert Node at the end of a linked list 
  head pointer input could be NULL as well for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Insert(Node *head,int data)
{
    Node *temp=new Node();
	temp->data=data;
    temp->next=NULL;
    if(head==NULL)
	{
		head=temp;
	}
    else
    {
        Node *temp2=head;
	while(temp2->next!=NULL)
        {
            temp2=temp2->next;
        }

    temp2->next=temp;
    }
return head;
}

