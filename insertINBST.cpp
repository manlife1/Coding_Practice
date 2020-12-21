
/* The structure of a BST node is as follows:

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

// The function returns the root of the BST (currently rooted at 'root') 
// after inserting a new Node with value 'Key' into it. 
Node* insert(Node* root, int Key)
{
    // Your code here
    if(root==nullptr){
        return new Node(Key);
    }
    
    if(root->data>Key){
        root->left=insert(root->left,Key);
    } else if(root->data<Key){
        root->right=insert(root->right,Key);
    }
    return root;
}
