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
    long long kthLargestLevelSum(TreeNode* root, int k) {
          vector<long long>l;
        if(root==NULL)
        {
            return 0;
        }
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {
            long long n=q.size(),sum=0;
            for(int i=1; i<=n; i++)
            {
                TreeNode *nodes=q.front();
                q.pop();
                if(nodes->left!=NULL)
                {
                    q.push(nodes->left);
                }
                if(nodes->right!=NULL)
                {
                    q.push(nodes->right);
                }
                sum+=nodes->val;
            }
            l.push_back(sum);
        }
        sort(l.begin(),l.end());
        if(size(l)<k)
        {
            return -1;
        }
        return l[l.size()-k];
    }
};