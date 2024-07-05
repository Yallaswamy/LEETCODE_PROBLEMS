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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        int c=2;
        ListNode *curr=head->next,*prev=head;
        vector<int>arr;
        while(curr->next!=NULL){
            if(curr->val>prev->val && curr->val>curr->next->val)
                arr.push_back(c);
            else if(curr->val<prev->val && curr->val<curr->next->val)
                arr.push_back(c);
            curr=curr->next;
            prev=prev->next;
            c++;
        }
        if(arr.size()<2)
            return {-1,-1};
        int n=arr.size();
        int maxm=arr[n-1]-arr[0];
        int minm=maxm;
        for(int i=1;i<n;i++)
            minm=min(minm,arr[i]-arr[i-1]);
        return {minm,maxm};
    }
};