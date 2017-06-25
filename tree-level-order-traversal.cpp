
/*
struct node
{
    int data;
    node* left;
    node* right;
}*/

void levelOrder(node * root) 
{
	if(root==NULL)
	{
		return;
	}
	queue<node*> q;
	q.push(root);
	while(!q.empty())
	{
		node* current=q.front();
		cout<<current->data<<" ";
		if(current->left!=NULL){
			q.push(current->left);
		}
		if(current->right!=NULL){
			q.push(current->right);
		}
		q.pop();
	}
}

