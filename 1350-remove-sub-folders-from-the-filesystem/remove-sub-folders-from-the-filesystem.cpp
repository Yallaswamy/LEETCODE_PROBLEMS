class Solution {
public:
    vector<string> removeSubfolders(vector<string>& folder) {
        vector<string>v;
        sort(folder.begin(),folder.end());
        string last=folder[0];
        for(auto it:folder) {
            if(it.find(last+'/')) {
                v.push_back(it);
                last=it;
            }
        }
        return v;
    }
};