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
    int height(TreeNode* root){
        if(root==NULL) return 0;
        return max(height(root->left),height(root->right))+1;
    }
    bool slove(TreeNode* root){
       if(root==NULL) return 1;
       if(abs(height(root->left)-height(root->right))>1) return 0;
        return slove(root->left) && slove(root->right);
    }
    bool isBalanced(TreeNode* root) {
        return slove(root);
    }
};