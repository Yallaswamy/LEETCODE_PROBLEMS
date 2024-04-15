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
    int slove(TreeNode* root,int ans){
        if(root==NULL){
            return 0;
        }
        ans=(ans*10)+root->val;
        if(root->left==NULL and root->right==NULL){
            return ans;
        }
        int left=slove(root->left,ans);
        int right=slove(root->right,ans);
        return left+right;


    }
    int sumNumbers(TreeNode* root) {
        return slove(root,0);
    }
};