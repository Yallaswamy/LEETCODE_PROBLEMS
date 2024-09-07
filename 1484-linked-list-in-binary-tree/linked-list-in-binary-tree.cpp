/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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
private:
    bool slove(ListNode *head, TreeNode* root){
        if(!root)return 0;
        if(head->val!=root->val){
            return 0;
        }
        if(head->next==NULL){
            return 1;
        }
        bool left=0;
        bool right=0;
        if(root->left && head->next && root->left->val==head->next->val){
            left=slove(head->next,root->left);
        }
        if(root->right && head->next && root->right->val==head->next->val){
            right=slove(head->next,root->right);
        }
        return left|right;
    }
public:
    bool isSubPath(ListNode* head, TreeNode* root) {
        if(!root){
            return 0;
        }
        if(root->val==head->val){
            if(slove(head,root)){
                return true;
            }
        }
        return isSubPath(head,root->left)|isSubPath(head,root->right);
    }
};