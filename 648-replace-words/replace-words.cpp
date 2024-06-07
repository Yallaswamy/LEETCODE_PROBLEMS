class Solution {
public:
    string replaceWords(vector<string>& dictionary, string sentence) {
        map<string,int>mp;
        for(int i=0;i<dictionary.size();i++){
            mp[dictionary[i]]++;
        }
        int f=0;
        string ans;
        vector<string>sentence1;
        string w="";
        for(int i=0;i<sentence.size();i++){
            if(sentence[i]!=' '){
                w+=sentence[i];
            }
            else{
                sentence1.push_back(w);
                w="";
            }
        }
        sentence1.push_back(w);
        for(int i=0;i<sentence1.size();i++){
            cout<<sentence1[i]<<" ";
        }
        for(int i=0;i<sentence1.size();i++){
            string word=sentence1[i];
            string s="";
            f=0;
            for(int j=0;j<word.size();j++){
                 s+=word[j];
                if(mp.find(s)!=mp.end()){
                    ans+=" "+s;
                    f=1;
                    break;
                }
            }
            if(f==0) ans+=" "+word;
        }
        return ans.substr(1,ans.size());
    }
     
};