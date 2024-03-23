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
    ListNode* middle(ListNode* head){
        ListNode* fast=head;
        ListNode* slow=head;
        while(fast and fast->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    } 
    ListNode* reverse(ListNode* head){
        ListNode* prev=NULL;
        ListNode* curr=head;
        ListNode* next;
        while(curr){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev;

    }
    void reorderList(ListNode* head) {
        ListNode* mid=middle(head);
        ListNode* head2=reverse(mid->next);
        mid->next=NULL;
        ListNode* t1;
        ListNode* t2;
        ListNode* head1=head; 
        while(head2!=NULL){
            t1=head1->next;
            t2=head2->next;
            head1->next=head2;
            head2->next=t1;
            head1=t1;
            head2=t2;
        }
    }
};