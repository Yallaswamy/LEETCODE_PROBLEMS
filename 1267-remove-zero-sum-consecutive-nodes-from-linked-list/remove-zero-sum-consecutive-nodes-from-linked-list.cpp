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
    ListNode* removeZeroSumSublists(ListNode* head) {
        vector<int>v;
        ListNode* temp=head;
        ListNode* dummy=new ListNode(0,head);
        ListNode* temp1=dummy;
        map<int,ListNode*>mp;
        mp[0]=dummy;;
        int sum=0;
        while(temp){
            sum+=temp->val;
            mp[sum]=temp;
            temp=temp->next;
        }

        sum=0;
        while(temp1){
            sum+=temp1->val;
            temp1->next=mp[sum]->next;
            temp1=temp1->next;
        }
        return dummy->next;

       
    }
};