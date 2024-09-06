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
        ListNode* temp=head;
        ListNode* temp1=new ListNode(0); 
        ListNode* temp2=temp1;
        while(temp){
            if(mp.find(temp->val)!=mp.end()){
                temp=temp->next;
            }
            else{
                temp1->next=new ListNode(temp->val);
                temp1=temp1->next;
                temp=temp->next;
                
            }
        }
        return temp2->next;

    }
};