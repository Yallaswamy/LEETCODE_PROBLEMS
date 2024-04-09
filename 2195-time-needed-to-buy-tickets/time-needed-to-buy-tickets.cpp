class Solution {
public:
    int timeRequiredToBuy(vector<int>& t, int k) {
      //  if(t[k-1]==0 ) return 0;
        queue<int>q;
        for(int i=0;i<t.size();i++){
            q.push(t[i]);
        }
        int c=0,c1=0;
        while(!q.empty()){
            int n=q.size();
            c1=0;
            while(n--){
                if (q.front()>0) c+=1;
                int ele=q.front();
                ele=ele-1;
                q.pop();
                if(c1==k and  ele==0) return c;
                q.push(ele);
                c1+=1;
            }
        }
        return 0;
    }
};