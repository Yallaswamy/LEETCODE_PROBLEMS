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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp=head;
        ListNode* temp1=head;
        int c=0;
        while(temp){
            c+=1;
            temp=temp->next;
        }
        int ans=c-n;
        if(n==1 and c==1 ) return NULL;
        if(c==ans or c==n) return head->next;
        for(int i=1;i<ans;i++){
            temp1=temp1->next;
        }
        temp1->next=temp1->next->next;
        return head;

    }
};