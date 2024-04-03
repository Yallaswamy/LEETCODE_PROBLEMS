class Solution {
public:
     bool slove(int i,int j,vector<vector<char>>& board,string& word,int c,
vector<vector<int>>&vis) {
    if (word.size()==c) {
        return true;
    }
    if (i<0 || i>=board.size() || j<0 || j>=board[0].size() || board[i][j] != word[c] || vis[i][j] == 1) {
        return false;
    }
    
    vis[i][j]=1;
    bool a= slove(i,j +1,board,word,c+1,vis);
    bool b=slove(i,j -1,board,word,c+1,vis);
    bool c1=slove(i+1,j,board,word,c+1,vis) ;
    bool d=slove(i-1,j,board,word,c+1,vis);
    vis[i][j] = 0;
    return a|| b|| c1 || d;
}


    bool exist(vector<vector<char>>& board, string word) {
        int n=board.size(),m=board[0].size();
        vector<vector<int>>vis(n+1,vector<int>(m+1,0));
         for (int i=0;i<n;i++) {
            for (int j=0;j<m;j++) {
                if (board[i][j]==word[0] && slove(i,j,board,word,0,vis)) {
                    return 1;
                }
            }
         }
         return 0;
    }

    
};