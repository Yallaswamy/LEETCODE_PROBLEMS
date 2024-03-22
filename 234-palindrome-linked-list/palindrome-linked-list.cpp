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
    bool isPalindrome(ListNode* head) {
        if (!head || !head->next) return true;
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast and fast->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* prev=NULL;
        ListNode* curr=head;
        ListNode* next;
        while(curr!=slow){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        if(fast) slow=slow->next;
        while(prev){
            if(prev->val!=slow->val){
                return 0;
            }
            prev=prev->next;
            slow=slow->next;
        }
        return 1;
    }
};