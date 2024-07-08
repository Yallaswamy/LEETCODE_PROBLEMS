class Solution {
public:
    int findTheWinner(int n, int k) {
        deque<int>q;
        for(int i=1;i<=n;i++){
            q.push_back(i);
        }
        for(int i=0;i<n-1;i++){
            int l=k-1;
            while(l){
                q.push_back(q.front());
                q.pop_front();
                l--;
            }
            cout<<q.front()<<" ";
            q.pop_front();
        }
        return q.front();
    }
};