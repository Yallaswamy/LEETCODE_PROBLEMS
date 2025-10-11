class Solution {
public:
    int maximumEnergy(vector<int>& energy, int k) {
        int maxi=INT_MIN,sum=0;;
        for(int i=energy.size()-1;i>=energy.size()-k;i--){
            sum=0;
            for(int j=i;j>=0;j-=k){
                sum+=energy[j];
                maxi=max(maxi,sum);
            }
        }
        return maxi;
    }
};