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
    ListNode* reverse(ListNode* head){
        ListNode* prev=NULL;
        ListNode* curr=head;
        ListNode* next1=NULL;
        while(curr!=NULL){
            next1 = curr->next;
            curr->next=prev;
            prev=curr;
            curr=next1;
        }
        return prev;
        
    }
    ListNode* doubleIt(ListNode* head) {
        head=reverse(head);
        ListNode* temp=head;
        int carry=0;
        while(temp){
            int val=(((temp->val)*2)%10)+carry;
            carry=(((temp->val)*2)/10);
            temp->val=val;
            temp=temp->next;
        }
        if(carry){
            ListNode* newNode=new ListNode(carry);
            temp=head;
            while(temp->next){
                temp=temp->next;
            }
            temp->next=newNode;
        }
        return reverse(head);
    }
};