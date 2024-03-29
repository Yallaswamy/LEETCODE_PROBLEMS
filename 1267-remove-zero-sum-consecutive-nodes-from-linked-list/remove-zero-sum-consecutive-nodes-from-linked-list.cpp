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
        int f=0;
        ListNode* temp=head;
        while(temp){
            v.push_back(temp->val);
            temp=temp->next;
        }
        for(int i=0;i<v.size();i++){
            int sum=0;
            for(int j=i;j<v.size();j++){
                sum+=v[j];
                if(sum==0){
                    for(int k=i;k<=j;k++){
                        v[k]=0;
                    }
                    break;
                }
            }
          
        }
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        ListNode* dummy=new ListNode(0);
        ListNode* temp1=dummy;
        for(int i=0;i<v.size();i++){
            if(v[i]!=0){
                temp1->next=new ListNode(v[i]);
                temp1=temp1->next;
            }
        }
        return dummy->next;
       
    }
};