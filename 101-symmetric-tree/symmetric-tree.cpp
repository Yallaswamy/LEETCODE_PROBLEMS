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
    bool isSymmetric(TreeNode* root) {
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int n=q.size();
            vector<int>l;
            for (int i=0;i<n;i++) {
                TreeNode* top = q.front();
                q.pop();
                if (top != nullptr) {
                    l.push_back(top->val);
                    if (top->left) {
                        q.push(top->left);
                    } else {
                        q.push(nullptr);
                    }
                    if (top->right) {
                        q.push(top->right);
                    }else {
                        q.push(nullptr);
                    }
                }else{
                        l.push_back(-101);
                }
            }
             int s = l.size();
            for (int i = 0; i < s/2; i++) {
                if(l[i]!=l[s-i-1]) return 0;
            }
        }
        return 1;
    }
};