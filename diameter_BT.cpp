//Height
int height(Node* root){
    if(root==nullptr){
        return 0;
    }
    
    return 1+max(height(root->left),height(root->right));
}

/* Computes the diameter of binary tree with given root.  */
int diameter(Node* node) {//O(N^2)
    // Your code here
    if(node==nullptr){
        return 0;
    }
    
    int h1=height(node->left);
    int h2=height(node->right);
    
    int op1=h1+h2+1;
    int op2=diameter(node->left);
    int op3=diameter(node->right);
    
    return max(op1,max(op2,op3));
}


//////////////////////////////////////////////////////////////////////////////////////
//OPTIMIZED DIAMETER
class Pair{
    public:
    int height;
    int diameter;
};
Pair fastDiameter(Node* node){//O(N) Time
  Pair p;
  if(node==nullptr){
      p.height=p.diameter=0;
      return p;
  }
  
  Pair leftT=fastDiameter(node->left);
  Pair rightT=fastDiameter(node->right);
  
  p.height=1+max(leftT.height,rightT.height);
  p.diameter=max(leftT.height+rightT.height+1,max(leftT.diameter,rightT.diameter));
  
  return p;
}
int diameter(Node* node) {
    // Your code here
    int ans;
    Pair p=fastDiameter(node);
    return p.diameter;
}
