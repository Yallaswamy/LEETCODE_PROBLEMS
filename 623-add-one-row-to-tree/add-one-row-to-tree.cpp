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
    TreeNode* slove(TreeNode* root, int val, int depth,int cur){
        if(root==NULL) return NULL;
        if(cur==depth){
            TreeNode* left=root->left;
            TreeNode* right=root->right;
            root->left=new TreeNode(val);
            root->right=new TreeNode(val);
            root->left->left=left;
            root->right->right=right;
            return root;
        }
        slove(root->left,val,depth,cur+1);
        slove(root->right,val,depth,cur+1);
        return root;
    }
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        if(depth==1){
            TreeNode* root1=new TreeNode(val);
            root1->left=root;
            return root1;
        }
        int cur=1;
        return slove(root,val,depth-1,cur);
    }
};