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
    TreeNode* slove(int l,int h,vector<int>&v){
        if(l>h){
            return NULL;
        }
        int mid=(l+h)/2;
        TreeNode* root=new TreeNode(v[mid]);
        root->left=slove(l,mid-1,v);
        root->right=slove(mid+1,h,v);
        return root;

    }
    void inorder(TreeNode* root,vector<int>&v){
        if(root==NULL){
            return ;
        }
        inorder(root->left,v);
        v.push_back(root->val);
        inorder(root->right,v);
    }
    TreeNode* balanceBST(TreeNode* root) {
        vector<int>v;
        inorder(root,v);
        return slove(0,v.size()-1,v);
    }
};