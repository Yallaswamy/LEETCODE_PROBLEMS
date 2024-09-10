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
    int gcd(int a,int b){
        if(b==0){
            return a;
        }
        else return gcd(b,a%b);
    }
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* temp=head;
        ListNode* temp1=NULL;
        while(temp and temp->next){
            int k=gcd(temp->val,temp->next->val);
            temp1=temp->next;
            temp->next=new ListNode(k);
            temp=temp->next;
            temp->next=temp1;
            temp=temp->next;
        }
        return head;
    }
};