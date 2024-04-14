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
    void inorder(TreeNode* root,int &ans){
        if(root==NULL) return ;
        inorder(root->left,ans);
        if (root->left and root->left->left==NULL and root->left->right==NULL) ans+=root->left->val;
        inorder(root->right,ans);
    } 
    int sumOfLeftLeaves(TreeNode* root) {
        int ans=0;
        inorder(root,ans);
        return ans;
    }
    
};