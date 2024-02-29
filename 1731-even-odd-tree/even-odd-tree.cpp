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
    int levelorder(TreeNode* root){
        if(root==NULL) return 1;
        queue<TreeNode*>q;
        q.push(root);
        int level=0;
        while(!q.empty()){ 
            int n=q.size();
            int val=(level%2==0)? INT_MIN:INT_MAX; 
            for(int i=0;i<n;i++){
                TreeNode* top=q.front();
                q.pop();
                int currval=top->val;
                if(level%2==0){
                    if(currval%2==0 or currval<=val) return 0;
                }
                else{
                    if(currval%2!=0  or currval>=val) return 0;
                }
                val=currval;
                if(top->left){
                    q.push(top->left);
                }
                if(top->right){
                    q.push(top->right);
                }
            }
            level++;
        }
        return 1;
    }
    bool isEvenOddTree(TreeNode* root) {
       return  levelorder(root);
    }
};