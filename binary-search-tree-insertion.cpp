/*
Node is defined as 

typedef struct node
{
   int data;
   node * left;
   node * right;
}node;

*/
node* newNode(int val)
{
    node* temp;
    temp = new node();
    temp->data = val;
    temp->right = NULL;
    temp->left = NULL;
    return temp;
}

node * insert(node * root, int value) 
{
    if(root == NULL)
    {
        return newNode(value);
    }
    if(value<=root->data)
    {
        root->left = insert(root->left,value);
    }
    else
    {
        root->right = insert(root->right,value);
    }
   return root;
}

