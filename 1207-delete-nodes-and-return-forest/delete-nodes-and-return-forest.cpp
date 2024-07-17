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
    TreeNode* slove(TreeNode* root,set<int>&del,vector<TreeNode*>&ans){
        if(!root) return NULL;
        root->left=slove(root->left,del,ans);
        root->right=slove(root->right,del,ans);
        if(del.find(root->val)!=del.end()){
            if(root->left){
                ans.push_back(root->left);
            }
            if(root->right){
                ans.push_back(root->right);
            }
            delete root;
            return NULL;
        }
        return root;
    }
    vector<TreeNode*> delNodes(TreeNode* root, vector<int>& to_delete) {
        set<int>del(to_delete.begin(), to_delete.end());
        vector<TreeNode*>ans;
        TreeNode* root1=slove(root,del,ans);
        if(root1) ans.push_back(root1);
        return ans;
    }
};