class Solution {
public:
    int BFS(int node ,vector<int>adj[],int n){
        queue<pair<int,int>>q;//{node,parent}
        vector<bool>vis(n+1,0);
        vector<int>dist(n+1,0);
        vis[node]=1;
        dist[node]=0;
        q.push({node,-1});
        int res=INT_MAX;
        while(!q.empty()){
            auto top=q.front();
            q.pop();
            node=top.first;
            int parent =top.second;
            for(auto nbr:adj[node]){
                if(!vis[nbr]){
                    q.push({nbr,node});
                    vis[nbr]=1;
                    dist[nbr]=dist[node]+1;
                }
                else{
                    if(nbr!=parent){
                        res=min(res,dist[nbr]+dist[node]+1);
                    }
                }
            }
        }
        return res;

    }
    int findShortestCycle(int n, vector<vector<int>>& edges) {
        vector<int>adj[n+1];
        int e = edges.size();
        for(int i=0;i<e;i++){
           int u=edges[i][0];
           int v=edges[i][1];
           adj[u].push_back(v);
           adj[v].push_back(u);
        }
        int LengthofShortCycle=INT_MAX;
        for(int i=0;i<n;i++){
            LengthofShortCycle=min(LengthofShortCycle,BFS(i,adj,n));
        }
        if(LengthofShortCycle==INT_MAX) return -1;
        else return LengthofShortCycle;
    }
};