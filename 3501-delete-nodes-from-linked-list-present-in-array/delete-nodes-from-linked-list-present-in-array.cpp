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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        while(head and mp.find(head->val)!=mp.end()){
            head=head->next;
        }
        ListNode* newHead=head;
        ListNode* prev=NULL;
        while(newHead){
            if(mp.find(newHead->val)!=mp.end()){
                prev->next=newHead->next;
            }
            else{
                prev=newHead;
            }
            newHead=newHead->next;
        }
        return head;

    }
};