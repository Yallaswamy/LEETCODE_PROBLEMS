class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        int maxi=0, sz=tasks.size();
        int freq[26]={0};
        for(char c: tasks){
            int f=++freq[c-'A'];
            maxi=max(maxi, f);
        }
        int num_maxFreq=count(freq, freq+26, maxi);
        
        int time=(maxi-1)*(n+1)+num_maxFreq;
        return max(time, sz);
    }
};