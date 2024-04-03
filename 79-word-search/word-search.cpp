class Solution {
public:
     bool slove(int i,int j,vector<vector<char>>& board,string& word,int c) {

    if (i<0 || i>=board.size() || j<0 || j>=board[0].size() || board[i][j]!=word[c] ) {
        return false;
    }
    if (word.size()-1==c) {
        return true;
    }
    char recover=board[i][j];
    board[i][j] = '@';
    bool a= slove(i,j +1,board,word,c+1);
    bool b=slove(i,j -1,board,word,c+1);
    bool c1=slove(i+1,j,board,word,c+1) ;
    bool d=slove(i-1,j,board,word,c+1);
    board[i][j] = recover;
    return a|| b|| c1 || d;
}


    bool exist(vector<vector<char>>& board, string word) {
        int n=board.size(),m=board[0].size();
      //  vector<vector<int>>vis(n+1,vector<int>(m+1,0));
         for (int i=0;i<n;i++) {
            for (int j=0;j<m;j++) {
                if (slove(i,j,board,word,0)) {
                    return 1;
                }
            }
         }
         return 0;
    }

    
};