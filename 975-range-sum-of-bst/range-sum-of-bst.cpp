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
    int inorder(TreeNode* root,int &l,int &h,int &sum){
        if(root==NULL){
            return 0;
        }
        inorder(root->left,l,h,sum);
        if(root->val>=l and root->val<=h){
            sum+=root->val;
        }
        inorder(root->right,l,h,sum);
        return sum;
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        int sum=0;
        inorder(root,low,high,sum);
        return sum;
    }
};