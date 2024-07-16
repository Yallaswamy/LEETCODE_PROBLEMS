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
    TreeNode* LCA(TreeNode* root,int p,int q){
        if(root==NULL || root->val==p || root->val==q){
            return root;
        }
        TreeNode* left=LCA(root->left,p,q);
        TreeNode* right=LCA(root->right,p,q);
        if(!left){
            return right; 
        }
        else if(!right){
            return left;
        }
        else{
            return root;
        }
    }
    bool slove(TreeNode* root,int value,string &str){
        if(root==NULL){
            return 0;
        }
        if(root->val==value) return 1;
        str+='L';
        if(slove(root->left,value,str)) return 1;
        str.pop_back();

        str+='R';
        if(slove(root->right,value,str)) return 1;
        str.pop_back();
        return 0;
    }
    string getDirections(TreeNode* root, int startValue, int destValue) {
        string str1="",str2="";
        slove(LCA(root,startValue,destValue),startValue,str1);
        slove(LCA(root,startValue,destValue),destValue,str2);
        string ans="";
        for(int i=0;i<str1.size();i++){
            ans+='U';
        }
        for(int i=0;i<str2.size();i++){

            ans.push_back(str2[i]);
        }
        return ans;
    }
};