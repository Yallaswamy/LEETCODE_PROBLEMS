class Solution {
public:
    int minOperations(vector<string>& logs) {
        int ans=0;
        for(int i=0;i<logs.size();i++){
            if(logs[i]=="../" and ans>0){
                ans--;
            }
            else if(logs[i]=="../" and ans==0){
                continue;
            }
            else if(logs[i]=="./"){
                continue;
            }
            else{
                ans++;
            }
        }
        return ans;
    }
};