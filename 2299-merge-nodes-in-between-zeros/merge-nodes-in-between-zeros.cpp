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
class Solution {
public:
    ListNode* mergeNodes(ListNode* head){
        ListNode* temp=head;
        ListNode* dummy=new ListNode(-1);
        ListNode* prev=dummy;
        int sum=0;
        while(temp){
            if(temp->val!=0){
                sum+=temp->val;
            }
            else if(temp->val==0 and sum!=0){
                dummy->next=new ListNode(sum);
                dummy=dummy->next;
                sum=0;
            }
            temp=temp->next;
        }
        return prev->next;
    }
};