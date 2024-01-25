class Solution {
public:
    void merge(vector<int>&nums,int l,int mid,int h,int &c){
        int i=0,j=mid+1;
        int k=l;
        for(int i=l;i<=mid;i++){
            while(j<=h and nums[i]>2LL*nums[j]){
                j++;
            }
            c+=j-(mid+1);
        }
        i=l,j=mid+1;
        int temp[h+1];
        while(i<=mid && j<=h){
            if(nums[i]<nums[j]){
                temp[k++]=nums[i++];
            }
            else{
                temp[k++]=nums[j++];
            }
        }
        while(i<=mid){
            temp[k++]=nums[i++];
        }
        while(j<=h){
            temp[k++]=nums[j++];
        }
        for(int i=l;i<=h;i++){
            nums[i]=temp[i];
        }


    }
    void solve(vector<int>& nums,int l,int h,int &ans){
        if(l>=h) return ;
        int mid=l+(h-l)/2;
        solve(nums,l,mid,ans);
        solve(nums,mid+1,h,ans);

        merge(nums,l,mid,h,ans);
    }
    int reversePairs(vector<int>& nums) {
        int l=0,ans=0;
        int h=nums.size()-1;
        solve(nums,l,h,ans);
        return ans;
    }
};