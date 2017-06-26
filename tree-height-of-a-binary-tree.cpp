
/*The tree node has data, left child and right child 
class Node {
    int data;
    Node* left;
    Node* right;
};

*/
    int max(int a,int b)
    {
        return a>b?a:b;
    }

    int height(Node* root) 
    {
        if(root==NULL)
        {
            return -1;
        }
        int leftheight=height(root->left);
        int rightheight=height(root->right);
        return max(leftheight,rightheight)+1;
    }
  
