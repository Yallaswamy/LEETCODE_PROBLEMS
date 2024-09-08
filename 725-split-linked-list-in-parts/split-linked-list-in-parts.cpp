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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        ListNode* temp=head;
        int len=0;
        while(temp){
            len+=1;
            temp=temp->next;
        }
        vector<ListNode*>ans;
        int parts=len/k;
        int rem=len%k;
        ListNode* prev=head;
        while(k--){
            int partlen=parts;
            if(rem>0)partlen++;
            partlen--;
            ListNode* newhead=prev;
            ListNode* newhead1=newhead;
            while(newhead and partlen--){
                newhead=newhead->next;
            }
            if(newhead){
                prev=newhead->next;
                newhead->next=NULL;
            }
            ans.push_back(newhead1);
            rem--;
        }
        return ans;

    }
};