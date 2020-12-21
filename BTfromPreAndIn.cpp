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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        if(preorder.size()==1){
            return new TreeNode(preorder[0]);
        }
        return helper(preorder,inorder,0,0,inorder.size()-1);
    }
    
    TreeNode* helper(vector<int>& preorder,vector<int>& inorder,int pre,int s,int e){
        if(s>e or pre>preorder.size()-1){
            return nullptr;
        }
        
        TreeNode* node= new TreeNode(preorder[pre]);
       
        int index=-1;
        
        for(int j=s;j<=e;j++){
            if(preorder[pre]==inorder[j]){
                index=j;
                break;
            }
        }
        node->left=helper(preorder,inorder,pre+1,s,index-1);
        int left_count=index-s+1;
        node->right=helper(preorder,inorder,pre+left_count,index+1,e);
        
        return node;
    }
};