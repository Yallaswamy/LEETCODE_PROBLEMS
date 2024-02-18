class Solution {
public:
    int mostBooked(int n, vector<vector<int>>& meetings) {
        vector<int>mp(n,0);
        priority_queue<pair<long long,long long  >,vector<pair<long long ,long long >>,greater<pair<long long,long long >>>pq;
        priority_queue<long long ,vector<long long >,greater<long long >>rooms;
        for(int i=0;i<n;i++){
            rooms.push(i);
        }
        int k=0;
        sort(meetings.begin(),meetings.end());
        for(int i=0;i<meetings.size();i++){
            long long  a=meetings[i][1];
            while(!pq.empty() && pq.top().first<=meetings[i][0]){
                k=pq.top().second;
               rooms.push(k);
                pq.pop();
            }
            if(pq.size()==n){
                a+=pq.top().first-meetings[i][0];
                int room=pq.top().second;
                rooms.push(room);
                pq.pop();
            }
            k=rooms.top();
            rooms.pop();
             mp[k]++;
            pq.push({a,k});
           

        }
        int ma=0,ans=0;
         for(int i=0;i<n;i++){
            if(mp[i]>ma){
                ma=mp[i];
                ans=i;
            }
        }
        return ans;
    }
};