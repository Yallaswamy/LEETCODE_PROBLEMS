class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int>v(heights.begin(),heights.end());
        sort(heights.begin(),heights.end());
        int c=0;
        for(int i=0;i<heights.size();i++){
            if(v[i]!=heights[i]){
                c+=1;
            }
        }
        return c;
    }
};