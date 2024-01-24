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
    int setbitscount(int n){
        return __builtin_popcount(n);
    }
    void solve(TreeNode* root,int xor1,int &ans){
        if(!root) return ;
        xor1=xor1^(1<<root->val);
        if(!root->left and !root->right){
            if(setbitscount(xor1)<=1) ans+=1;
        }
        solve(root->left,xor1,ans);
        solve(root->right,xor1,ans);
    }
    int pseudoPalindromicPaths (TreeNode* root) {
        int xor1=0,ans=0;
         solve(root,xor1,ans);
         return ans;
    }
};