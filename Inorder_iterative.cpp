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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> v;
        if(root==nullptr){
            return v;
        }
        
        stack<TreeNode*> s;
        
        while(true){
            if(root!=nullptr){
                s.push(root);
                root=root->left;
            }else{
                if(s.empty()){
                    break;
                }
                TreeNode* temp=s.top();
                v.push_back(temp->val);
                s.pop();
                root=temp->right;
            }
        }
        return v;
    }
};