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
    int maxi=-1,ans=0;
    void findBottomLeftValue1(TreeNode* root,int h){
        if(root==NULL) {
            return ;
        }
        if(h>maxi){
            maxi=h;
            ans=root->val;
        }
        findBottomLeftValue1(root->left,h+1);
        findBottomLeftValue1(root->right,h+1);
    }
    int findBottomLeftValue(TreeNode* root) {
        findBottomLeftValue1(root,0);
        return ans;
    }
};