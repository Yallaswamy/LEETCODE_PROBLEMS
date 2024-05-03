class Solution {
public:
    int compareVersion(string version1, string version2) {
        vector<int>v,v1;
        string str="";
        for(int i=0;i<version1.size();i++){
           if(version1[i]=='.'){
                v.push_back(stoi(str));
                str="";
           }
           else{
                str+=version1[i];
           }
        }
        v.push_back(stoi(str));
        str="";
        for(int i=0;i<version2.size();i++){
           if(version2[i]=='.'){
                v1.push_back(stoi(str));
                str="";
           }
           else{
                str+=version2[i];
           }
        }
        v1.push_back(stoi(str));
        int i=v.size(),j=v1.size(),i1=0,j1=0;
        while(i1<i && j1<j ){
            if(v[i1]==v1[j1]){
                i1++;
                j1++;
            }
            else if(v[i1]>v1[j1]) return 1;
            else return -1;
        }
        while(i1<i){
            if(v[i1]==0) i1++;
            else return 1;
        }
        while(j1<j){
            if(v1[j1]==0) j1++;
            else return -1;
        }
        return 0;
    }
};