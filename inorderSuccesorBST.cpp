/*
	Parent pointer is NOT needed in this algorithm. The Algorithm is divided into two cases on the basis of right subtree of the input node being empty or not.
Input: node, root // node is the node whose Inorder successor is needed. 
Output: succ // succ is Inorder successor of node.

1. If right subtree of node is not NULL, then succ lies in right subtree. Do the following. 
Go to right subtree and return the node with minimum key value in the right subtree.
2. If right subtree of node is NULL, then start from the root and us search like technique. Do the following. 
Travel down the tree, if a node’s data is greater than root’s data then go right side, otherwise, go to left side.
*/



/*The structure of Node

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
Node* minValue(Node* root){
    if(root==nullptr){
        return nullptr;
    }
    
    while(root->left!=nullptr){
        root=root->left;
    }
    return root;
}
// returns the inorder successor of the Node x in BST (rooted at 'root')
Node * inOrderSuccessor(Node *root, Node *x)
{
    //Your code here
    if(x->right!=nullptr){
        return minValue(x->right);
    }
    
    Node* succ=nullptr;
    
    while(root!=nullptr){
        if(x->data<root->data){
            succ=root;
            root=root->left;
        } else if(x->data>root->data){
            root=root->right;
        } else{
            break;
        }
    }
    
    return succ;
}