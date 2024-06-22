class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int ans=0;
        for(int i=0;i<grumpy.size();i++){
            if(grumpy[i]==0){
                ans+=customers[i];
            }
        }
        int i=0,j=0,maxi=0,ans1=0;
        while(j<grumpy.size()){
            if(grumpy[j]==1){
                ans1+=customers[j];
            }
            if(j-i+1==minutes){
                maxi=max(maxi,ans1);
                cout<<maxi<<" ";
            }
            while((j-i+1)>=minutes){
                if(grumpy[i]==1){
                    ans1-=customers[i];
                }
                i++;
            }
            j++;
        }
        cout<<maxi;
        return ans+maxi;
    }
};