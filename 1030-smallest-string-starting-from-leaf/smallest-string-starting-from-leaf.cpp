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
    string s="";
    void  slove(TreeNode* root,string ans){
        if(root==NULL){
            return ;
        }
        ans=char(root->val+'a')+ans;
        if(root->left==NULL and root->right==NULL){
            if(s>ans || s=="") s=ans;
            return ;
        }
        slove(root->left,ans);
        slove(root->right,ans);

    }
    string smallestFromLeaf(TreeNode* root) {
        slove(root,"");
      //  reverse(s.begin(),s.end());
        return s;
    }
};