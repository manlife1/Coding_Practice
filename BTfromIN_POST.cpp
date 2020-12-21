/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        return helper(0,inorder.size()-1,0,postorder.size()-1,inorder,postorder);
    }
    
    TreeNode* helper(int inS,int inE,int postS,int postE,vector<int> &inorder,vector<int> &postorder){
        if(inS>inE or postS>postE){
            return nullptr;
        }
        
        TreeNode* node=new TreeNode(postorder[postE]);
        int indexIN=-1;
        for(int i=inS;i<=inE;i++){
            if(node->val==inorder[i]){
                indexIN=i;
                break;
            }
        }
        
        int leftCount=indexIN-inS;
        node->left=helper(inS,indexIN-1,postS,postS+leftCount-1,inorder,postorder);
        node->right=helper(indexIN+1,inE,postS+leftCount,postE-1,inorder,postorder);
        return node;
    }
};