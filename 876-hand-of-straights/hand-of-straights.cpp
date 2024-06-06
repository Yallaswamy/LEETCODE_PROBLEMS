class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        if(hand.size()%groupSize!=0) return 0;
        else
        sort(hand.begin(),hand.end());
        map<int,int>mp;
        for(auto it:hand){
            mp[it]++;
        }
        for(int i=0;i<hand.size();i++){
            int num=hand[i];
            if(mp[num]){
                for(int j=0;j<groupSize;j++){
                    if(!mp[num+j]){
                        return 0;
                    }
                    else{
                        mp[num+j]--;
                        if(mp[num+j]==0) mp.erase(num+j);
                    }
                }
            }
        }
        return 1;

    }
};