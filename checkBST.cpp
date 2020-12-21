
/* A binary tree node has data, pointer to left child
   and a pointer to right child  
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

// return true if the given tree is a BST, else return false

bool isBSTHelper(Node* root, int minV,int maxV){
    if(root==nullptr){
        return true;
    }
    //We allow only distinct values
    if(root->data<=maxV and root->data>=minV and (isBSTHelper(root->left,minV,root->data-1) and
    isBSTHelper(root->right,root->data+1,maxV))){
        return true;
    }
    return false;
}
bool isBST(Node* root) {
    // Your code here
    return isBSTHelper(root,INT_MIN,INT_MAX);
}
