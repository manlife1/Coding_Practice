
//User function template for C++

/* The Node structure is
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
}; 
*/
int countNodes(Node* root){
    if(root==nullptr){
        return 0;
    }
    
    return 1+countNodes(root->left)+countNodes(root->right);
}

void storeInorder(Node* root,int *arr,int &i){
    if(root==nullptr){
        return;
    }
    
    storeInorder(root->left,arr,i);
    arr[i++]=root->data;
    storeInorder(root->right,arr,i);
}

void arrayToBst(Node* root,int *arr,int &i){
    if(root==nullptr){
        return;
    }
    
    arrayToBst(root->left,arr,i);
    root->data=arr[i++];
    arrayToBst(root->right,arr,i);
}
// The given root is the root of the Binary Tree
// Return the root of the generated BST
Node *binaryTreeToBST (Node *root)
{
    //Your code goes here
    if(root==nullptr){
        return nullptr;
    }
    
    int n=countNodes(root);
    int arr[n];
    int j=0;
    storeInorder(root,arr,j);
    sort(arr,arr+n);
    int i=0;
    arrayToBst(root,arr,i);
    return root;
}