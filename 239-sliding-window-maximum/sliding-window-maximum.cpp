class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int>dq;
          vector<int>v;
        int i=0,j=0,n=nums.size();
        while(j<n){
            while(!dq.empty() and nums[j]>dq.back()){
                dq.pop_back();
            }
            dq.push_back(nums[j]);
            if(j-i+1<k){
                j++;
            }
            else if(j-i+1==k){
                v.push_back(dq.front());
                if(nums[i]>=dq.front()){
                    dq.pop_front();
                }
                i++;j++;
            }
        }
        return v;
    }
};