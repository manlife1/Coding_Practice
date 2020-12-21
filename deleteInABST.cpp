
/* The structure of a BST Node is as follows:

struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

// Return the root of the modified BST after deleting the node with value X
Node *deleteNode(Node *root,  int X)
{
    // your code goes here
    if(root==nullptr){
        return nullptr;
    }
    else if(root->data>X){
        root->left=deleteNode(root->left,X);
        return root;
    } else if(root->data<X){
        root->right=deleteNode(root->right,X);
        return root;
    } else{
        //have no child
        if(root->left==nullptr and root->right==nullptr){
            delete root;
            return nullptr;
        }
        
        //1 child
        if(root->left!=nullptr and root->right==nullptr){
            Node* temp=root->left;
            delete root;
            return temp;
        }
        
        if(root->right!=nullptr and root->left==nullptr){
            Node* temp=root->right;
            delete root;
            return temp;
        }
        
        //2. child
        if(root->left!=nullptr and root->right!=nullptr){
            Node* replace=root->right;
            
            while(replace->left!=nullptr){
                replace=replace->left;
            }
            
            root->data=replace->data;
            
            root->right=deleteNode(root->right,replace->data);
            return root;
            
        }
        
    }
    
    
}
