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
    ListNode* removeNodes(ListNode* head) {
        ListNode* temp=head;
        stack<int>st;
        while(temp){
            st.push(temp->val);
            temp=temp->next;
        }
        vector<int>v;
        int top=st.top();
        v.push_back(top);
        st.pop();
        while(!st.empty()){
            if(st.top()>=top){
                v.push_back(st.top());
                top=st.top();
            }
            st.pop();
        }
        ListNode* temp1=new ListNode(-1);
        ListNode* dummy=temp1;
        reverse(v.begin(),v.end());
        for(auto it:v){
            temp1->next=new ListNode(it);
            temp1=temp1->next;
        }
        return dummy->next;;

    }
};