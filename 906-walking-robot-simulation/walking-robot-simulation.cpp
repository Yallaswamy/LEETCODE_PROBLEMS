class Solution {
public:
    int robotSim(vector<int>& commands, vector<vector<int>>& obstacles) {
        unordered_map<string,int>mp;
        for(auto it:obstacles){
            string obs=to_string(it[0])+"*"+to_string(it[1]);
            mp[obs]++;
        }
        vector<vector<int>>dict= {{-1,0},{0,1},{1,0},{0,-1}}; 
        int xd=0,yd=0,dir=1,ans=0;
        for(int i=0;i<commands.size();i++){
            if(commands[i]==-1){
                dir=(dir+1)%4;
            }
            else if(commands[i]==-2){
                if(dir==0) dir=3;
                else dir-=1;
            }
            else{
                for(int j=1;j<=commands[i];j++){
                    int nx=xd+dict[dir][0];
                    int ny=yd+dict[dir][1];
                    string obs=to_string(nx)+"*"+to_string(ny);
                    if(mp.find(obs)!=mp.end()){
                        break;
                    }
                    xd=nx;
                    yd=ny;
                    ans=max(ans,xd*xd+yd*yd);
                }
            }
        }
        return ans;
    }
};