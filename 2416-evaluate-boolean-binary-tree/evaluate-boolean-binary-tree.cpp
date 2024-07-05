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
    bool slove(TreeNode* root){
        if(root->left==NULL and root->right==NULL){
            return root->val;
        }
        int left=slove(root->left);
        int right=slove(root->right);
        if(root->val==2){
            return left|right;
        }
        else{
            return left&right;
        }
    }
    bool evaluateTree(TreeNode* root) {
        return slove(root);
    
    }
};