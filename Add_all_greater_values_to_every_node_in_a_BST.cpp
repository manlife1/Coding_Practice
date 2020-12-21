/*
Node structure is as follows:
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
Node* helper(Node* root,int &sum){
    if(root==nullptr){
        return nullptr;
    }
    
    root->right=helper(root->right,sum);
    root->data+=sum;
    sum=root->data;
    root->left=helper(root->left,sum);
    
    return root;
}
// modify the BST and return its root

Node* modify(Node *root)
{
    // Your code here
    int sum=0;
    return helper(root,sum);
    
}