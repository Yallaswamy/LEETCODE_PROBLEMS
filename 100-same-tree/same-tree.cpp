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
    void preorder(TreeNode* root,vector<int>&v){
        if(root==NULL){
            v.push_back(1e5);
            return ;
        }
        v.push_back(root->val);
       preorder(root->left,v);
        preorder(root->right,v);
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        vector<int>v;
        vector<int>v1;
        preorder(p,v);
        preorder(q,v1);
        return v==v1;
    }
};