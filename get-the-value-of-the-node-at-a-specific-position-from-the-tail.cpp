/*
  Get Nth element from the end in a linked list of integers
  Number of elements in the list will always be greater than N.
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
int GetNode(Node *head,int positionFromTail)
{
    Node *current,*prev,*Next;
    current=head;
    Next=head;
    prev=NULL;
    while(current!=NULL)
    {
        Next=current->next;
        current->next=prev;
        prev=current;
        current=Next;
    }
    head=prev;
    for(int i=0;i<positionFromTail;i++)
    {
        head=head->next;
    }
    return(head->data);
}

